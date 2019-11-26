#include "performactionstate.h"

PerformActionState::PerformActionState()
{

}

PerformActionState::~PerformActionState()
{

}

void PerformActionState::update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent)
{
    if(!agent->current_actions.size()){
        fsm->pop();
        fsm->push(agent->idle_state);
        agent->data_provider->actions_finished();
        return;
    }

    std::shared_ptr<GoapAction> action = agent->current_actions.top();

    if(action->is_done()){
        agent->current_actions.pop();
    }

    if(agent->current_actions.size()){
        action = agent->current_actions.top();
        bool in_range = action->requires_in_range() ? action->get_is_in_range() : true;

        if(in_range){
            bool success = action->perform(agent->data_provider);

            if(!success){
                fsm->pop();
                fsm->push(agent->idle_state);
                agent->data_provider->plan_aborted(action);
            }
        }else{
            fsm->push(agent->move_to_state);
        }
    }else{
        fsm->pop();
        fsm->push(agent->idle_state);
        agent->data_provider->actions_finished();
    }


}

#include "movetostate.h"

MoveToState::MoveToState()
{

}

MoveToState::~MoveToState()
{

}

void MoveToState::update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent)
{
    const std::shared_ptr<GoapAction>& action = agent->current_actions.top();

    if(action->requires_in_range() && action->target == nullptr){
        fsm->pop();
        fsm->pop();
        fsm->push(agent->idle_state);
        return;
    }

    if(agent->data_provider->move_agent(action)){
        fsm->pop();
    }
}

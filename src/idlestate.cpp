#include "idlestate.h"

IdleState::IdleState()
{

}

IdleState::~IdleState()
{

}

void IdleState::update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent)
{
    auto goal_state = agent->data_provider->create_goal_state();
    std::stack<std::shared_ptr<GoapAction>> plan = this->planner.plan(agent, goal_state);

    if(!plan.size()){
        agent->current_actions = plan;
        agent->data_provider->plan_found(goal_state, plan);

        fsm->pop();
        fsm->push(agent->perform_action_state);
    }else{
        fsm->pop();
        fsm->push(agent->idle_state);
    }
}

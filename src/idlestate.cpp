#include "idlestate.h"

IdleState::IdleState()
{

}

IdleState::~IdleState()
{

}

void IdleState::update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent)
{
    // GOAP planning

    // Plan
    auto goal = agent->data_provider->create_goal_state();
    std::stack<std::shared_ptr<GoapAction>> plan = this->planner.plan(agent);

    if(!plan.size()){
        agent->current_actions = plan;
        agent->data_provider->planFound(goal, plan);

        fsm->pop();
        fsm->push(agent->perform_action_state);
    }else{
        fsm->pop();
        fsm->push(agent->idle_state);
    }

    /*
    Queue<GoapAction> plan = planner.plan(gameObject, availableActions, worldState, goal);
    if (plan != null) {
        // we have a plan, hooray!
        currentActions = plan;
        dataProvider.planFound(goal, plan);

        fsm.popState(); // move to PerformAction state
        fsm.pushState(performActionState);

        } else {
        // ugh, we couldn't get a plan
        dataProvider.planFailed(goal);
        fsm.popState (); // move back to IdleAction state
        fsm.pushState (idleState);
    }
*/
}

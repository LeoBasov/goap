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

    // get the world state and the goal we want to plan for

    /*
    HashSet<KeyValuePair<string,object>> worldState = i_goap.getWorldState();
    HashSet<KeyValuePair<string,object>> goal = i_goap.createGoalState();
    */

    // Plan
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

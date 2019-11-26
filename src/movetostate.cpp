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

    /*if(action->)

               if (action.requiresInRange() && action.target == null) {
                    Debug.Log("<color=red>Fatal error:</color> Action requires a target but has none. Planning failed. You did not assign the target in your Action.checkProceduralPrecondition()");
                    fsm.popState(); // move
                    fsm.popState(); // perform
                    fsm.pushState(idleState);
                    return;
                }

                // get the agent to move itself
                if ( dataProvider.moveAgent(action) ) {
                    fsm.popState();
                }*/
}

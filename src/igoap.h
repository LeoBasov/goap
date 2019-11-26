#pragma once

#include <string>
#include <map>
#include <stack>
#include <memory>

#include "goapaction.h"

/**
 * Collect the world data for this Agent that will be
 * used for GOAP planning.
 */

/**
 * Collect the world data for this Agent that will be
 * used for GOAP planning.
 */


/**
 * Any agent that wants to use GOAP must implement
 * this interface. It provides information to the GOAP
 * planner so it can plan what actions to use.
 *
 * It also provides an interface for the planner to give
 * feedback to the Agent and report success/failure.
 */


class IGoap
{
public:
    IGoap();
    virtual ~IGoap();

    /**
     * The starting state of the Agent and the world.
     * Supply what states are needed for actions to run.
     */
    virtual std::map<std::string, bool> get_world_state () const = 0;

    /**
     * Give the planner a new goal so it can figure out
     * the actions needed to fulfill it.
     */
    virtual std::map<std::string, bool> create_goal_state () const = 0;

    /**
     * No sequence of actions could be found for the supplied goal.
     * You will need to try another goal
     */
    virtual void planFailed (std::map<std::string, bool> failedGoal) = 0;

    /**
     * A plan was found for the supplied goal.
     * These are the actions the Agent will perform, in order.
     */
    virtual void planFound (std::map<std::string, bool> goal, std::stack<std::shared_ptr<GoapAction>> actions) = 0;

    /**
     * All actions are complete and the goal was reached. Hooray!
     */
    virtual void actionsFinished () = 0;

    /**
     * One of the actions caused the plan to abort.
     * That action is returned.
     */
    virtual void planAborted (GoapAction aborter) = 0;

    /**
     * Called during Update. Move the agent towards the target in order
     * for the next action to be able to perform.
     * Return true if the Agent is at the target and the next action can perform.
     * False if it is not there yet.
     */
    virtual bool moveAgent(GoapAction nextAction) = 0;
};

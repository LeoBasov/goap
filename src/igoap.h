#pragma once

#include <string>
#include <unordered_map>
#include <vector>

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

    /**
     * The starting state of the Agent and the world.
     * Supply what states are needed for actions to run.
     */
    virtual std::unordered_map<std::string, bool> getWorldState () const = 0;

    /**
     * Give the planner a new goal so it can figure out
     * the actions needed to fulfill it.
     */
    virtual std::unordered_map<std::string, bool> createGoalState () const = 0;

    /**
     * No sequence of actions could be found for the supplied goal.
     * You will need to try another goal
     */
    virtual void planFailed (std::unordered_map<std::string, bool> failedGoal) = 0;

    /**
     * A plan was found for the supplied goal.
     * These are the actions the Agent will perform, in order.
     */
    virtual void planFound (std::unordered_map<std::string, bool> goal, std::vector<GoapAction> actions) = 0;

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

#include "goapplaner.h"

GoapPlanner::GoapPlanner()
{

}

GoapPlanner::~GoapPlanner()
{

}

std::stack<std::shared_ptr<GoapAction> > GoapPlanner::plan(const std::shared_ptr<GoapAgent>& agent, const std::map<std::string, bool> &goal_state) const
{
    //TO DO: MAKE REAL IMPLEMENTATION
    std::stack<std::shared_ptr<GoapAction>> created_plan;

    for(const auto& action : agent->available_actions){
        created_plan.push(action);
    }

    return created_plan;
}

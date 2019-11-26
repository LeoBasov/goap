#include "goapplaner.h"

GoapPlanner::GoapPlanner()
{

}

GoapPlanner::~GoapPlanner()
{

}

std::stack<std::shared_ptr<GoapAction> > GoapPlanner::plan(const std::shared_ptr<GoapAgent>& ) const
{
    std::stack<std::shared_ptr<GoapAction>> created_plan;

    return created_plan;
}

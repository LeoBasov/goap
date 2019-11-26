#pragma once

#include <vector>
#include <memory>
#include <map>

#include "goapaction.h"
#include "goapagent.h"

class GoapPlanner
{
public:
    GoapPlanner();
    ~GoapPlanner();

    std::stack<std::shared_ptr<GoapAction>> plan(const std::shared_ptr<GoapAgent>& agent, const std::map<std::string, bool>& goal_state) const;
};


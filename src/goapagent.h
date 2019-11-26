#pragma once

#include <memory>
#include <stack>
#include <vector>

#include "igoap.h"
#include "finitestate.h"
#include "finitestatemachine.h"

class GoapAgent : public std::enable_shared_from_this<GoapAgent>
{
public:
    GoapAgent();

    void set_up(const std::shared_ptr<IGoap>& data_provider
                ,const std::vector<std::shared_ptr<GoapAction>>& available_actions
                ,const std::shared_ptr<FiniteState>& idle_state
                ,const std::shared_ptr<FiniteState>& move_to_state
                ,const std::shared_ptr<FiniteState>& perform_action_state);
    void update();

    std::shared_ptr<IGoap> data_provider;
    std::vector<std::shared_ptr<GoapAction>> available_actions;
    std::stack<std::shared_ptr<GoapAction>> current_actions;

    std::shared_ptr<FiniteState> idle_state;
    std::shared_ptr<FiniteState> move_to_state;
    std::shared_ptr<FiniteState> perform_action_state;

    std::shared_ptr<FiniteStateMachine> fsm;
};

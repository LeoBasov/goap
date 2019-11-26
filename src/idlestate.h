#pragma once

#include "finitestate.h"
#include "goapplaner.h"
#include "finitestatemachine.h"

class IdleState : public FiniteState
{
public:
    IdleState();
    ~IdleState() override;

    void update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent) override;

private:
    GoapPlanner planner;
};


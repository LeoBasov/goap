#pragma once

#include "finitestate.h"
#include "goapagent.h"
#include "goapaction.h"

class PerformActionState : public FiniteState
{
public:
    PerformActionState();
    ~PerformActionState() override;

    void update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent) override;
};

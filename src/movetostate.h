#pragma once

#include "finitestate.h"
#include "goapagent.h"
#include "goapaction.h"

class MoveToState : public FiniteState
{
public:
    MoveToState();
    ~MoveToState() override;

    void update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent) override;
};

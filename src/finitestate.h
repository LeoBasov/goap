#pragma once

#include <memory>

class FiniteStateMachine;
class GoapAgent;

class FiniteState
{
public:
    FiniteState();
    virtual ~FiniteState();

    virtual void update(const std::shared_ptr<FiniteStateMachine>& fsm, const std::shared_ptr<GoapAgent>& agent) = 0;
};


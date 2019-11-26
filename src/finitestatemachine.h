#pragma once

#include <stack>
#include <memory>

#include "finitestate.h"

class GoapAgent;

class FiniteStateMachine : public std::enable_shared_from_this<FiniteStateMachine>
{
public:
    FiniteStateMachine();
    ~FiniteStateMachine();

    void update(const std::shared_ptr<GoapAgent>& agent);
    void pop();
    void push(const std::shared_ptr<FiniteState>& state);

private:
    std::stack<std::shared_ptr<FiniteState>> stack;
};


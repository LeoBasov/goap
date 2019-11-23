#pragma once

#include <stack>
#include <memory>

#include "src/finitestate.h"
#include "src/gameobject.h"

class FiniteStateMachine : public std::enable_shared_from_this<FiniteStateMachine>
{
public:
    FiniteStateMachine();

    void push(const std::shared_ptr<FiniteState>& state);
    void pop();
    void update(const std::shared_ptr<GameObject>& object);

private:
    std::stack<std::shared_ptr<FiniteState>> stack;
};

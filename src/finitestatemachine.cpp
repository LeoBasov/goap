#include "finitestatemachine.h"

FiniteStateMachine::FiniteStateMachine()
{

}

FiniteStateMachine::~FiniteStateMachine()
{

}

void FiniteStateMachine::update(const std::shared_ptr<GoapAgent>& agent)
{
    auto ptr = shared_from_this();
    this->stack.top()->update(ptr, agent);
}

void FiniteStateMachine::pop()
{
    this->stack.pop();
}

void FiniteStateMachine::push(const std::shared_ptr<FiniteState>& state)
{
    this->stack.push(state);
}

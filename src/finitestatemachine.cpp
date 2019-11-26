#include "finitestatemachine.h"

FiniteStateMachine::FiniteStateMachine()
{

}

FiniteStateMachine::~FiniteStateMachine()
{

}

void FiniteStateMachine::update(const std::shared_ptr<GoapAgent>& agent)
{
    this->stack.top()->update(shared_from_this(), agent);
}

void FiniteStateMachine::pop()
{
    this->stack.pop();
}

void FiniteStateMachine::push(const std::shared_ptr<FiniteState>& state)
{
    this->stack.push(state);
}

#include "finitestatemachine.h"

FiniteStateMachine::FiniteStateMachine()
{

}

void FiniteStateMachine::push(const std::shared_ptr<FiniteState>& state)
{
    if(state){
        this->stack.push(state);
    }
}

void FiniteStateMachine::pop()
{
    this->stack.pop();
}

void FiniteStateMachine::update(const std::shared_ptr<GameObject> &object)
{
    if(!this->stack.empty()){
        this->stack.top()->update(shared_from_this(), object);
    }
}

#pragma once

#include <memory>

#include "src/gameobject.h"

class FiniteStateMachine;

class FiniteState
{
public:
    FiniteState();
    virtual ~FiniteState() = 0;

    virtual void update(std::shared_ptr<FiniteStateMachine> fsm, const std::shared_ptr<GameObject>& object) = 0;
};

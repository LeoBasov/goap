#pragma once

#include <memory>
#include <string>
#include <vector>

#include "gameobject.h"

struct Action
{
    enum Type{POP, PUSH};

    Type action;
    std::string state;
};

class State
{
public:
    State();
    virtual ~State() = 0;

    virtual std::vector<Action> update(const std::shared_ptr<GameObject>& object) = 0;
};

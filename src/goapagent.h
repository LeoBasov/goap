#pragma once

#include <stack>
#include <unordered_map>

#include "state.h"
#include "gameobject.h"

class GoapAgent
{
public:
    GoapAgent();

    void update();

private:
    std::stack<std::shared_ptr<State>> fsm;
    std::shared_ptr<GameObject> object;
    std::unordered_map<std::string, std::shared_ptr<State>> states;
};

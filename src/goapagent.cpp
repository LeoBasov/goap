#include "goapagent.h"

GoapAgent::GoapAgent()
{

}

void GoapAgent::update()
{
    std::vector<Action> actions;

    if(!this->fsm.empty()){
        actions = this->fsm.top()->update(this->object);
    }

    for(const Action& action : actions){
        switch (action.action) {
        case Action::POP:
            this->fsm.pop();
            break;
        case Action::PUSH:
            this->fsm.push(this->states.at(action.state));
            break;
        }
    }
}

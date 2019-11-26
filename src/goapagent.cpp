#include "goapagent.h"

GoapAgent::GoapAgent()
{

}

void GoapAgent::set_up(std::shared_ptr<IGoap> data_provider
                       ,std::vector<std::shared_ptr<GoapAction>> available_actions
                       ,std::stack<std::shared_ptr<GoapAction>> current_actions
                       ,std::shared_ptr<FiniteState> idle_state
                       ,std::shared_ptr<FiniteState> move_to_state
                       ,std::shared_ptr<FiniteState> perform_action_state)
{
    this->data_provider = data_provider;
    this->available_actions = available_actions;
    this->current_actions = current_actions;
    this->idle_state = idle_state;
    this->move_to_state = move_to_state;
    this->perform_action_state = perform_action_state;
}

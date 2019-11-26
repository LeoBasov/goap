#include "goapagent.h"

GoapAgent::GoapAgent()
    :fsm(std::make_shared<FiniteStateMachine>())
{

}

void GoapAgent::set_up(const std::shared_ptr<IGoap> &data_provider
                       ,const std::vector<std::shared_ptr<GoapAction> > &available_actions
                       ,const std::shared_ptr<FiniteState> &idle_state
                       ,const std::shared_ptr<FiniteState> &move_to_state
                       ,const std::shared_ptr<FiniteState> &perform_action_state)
{
    this->data_provider = data_provider;
    this->available_actions = available_actions;
    this->idle_state = idle_state;
    this->move_to_state = move_to_state;
    this->perform_action_state = perform_action_state;

    this->fsm->push(idle_state);
}

void GoapAgent::update()
{
    auto ptr = shared_from_this();
    this->fsm->update(ptr);
}

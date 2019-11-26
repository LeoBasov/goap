#include <iostream>

#include "src/labourer.h"
#include "../../src/idlestate.h"
#include "../../src/movetostate.h"
#include "../../src/performactionstate.h"
#include "../../src/goapagent.h"
#include "src/chopwood.h"

std::vector<std::shared_ptr<GoapAction>> set_up_actions()
{
    std::vector<std::shared_ptr<GoapAction>> actions;

    actions.push_back(std::make_shared<ChopWood>());

    return actions;
}

int main()
{
    std::shared_ptr<Labourer> data_provider = std::make_shared<Labourer>();
    std::vector<std::shared_ptr<GoapAction>> available_actions = set_up_actions();
    std::shared_ptr<FiniteState> idle_state = std::make_shared<IdleState>();
    std::shared_ptr<FiniteState> move_to_state = std::make_shared<MoveToState>();
    std::shared_ptr<FiniteState> perform_action_state  = std::make_shared<PerformActionState>();

    std::shared_ptr<GoapAgent> agent = std::make_shared<GoapAgent>();

    agent->set_up(data_provider, available_actions, idle_state, move_to_state, perform_action_state);

    agent->update();

    return 0;
}

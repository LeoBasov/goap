#include "labourer.h"

Labourer::Labourer()
{

}

Labourer::~Labourer()
{

}


std::map<std::string, bool> Labourer::get_world_state () const
{
    std::map<std::string, bool> world_state;

    return world_state;
}

std::map<std::string, bool> Labourer::create_goal_state () const
{
    return std::map<std::string, bool>();
}

void Labourer::plan_failed (std::map<std::string, bool> failed_goal_state)
{

}

void Labourer::plan_found (std::map<std::string, bool> goal_state, std::stack<std::shared_ptr<GoapAction>> actions)
{

}

void Labourer::actions_finished ()
{

}

void Labourer::plan_aborted (GoapAction aborter)
{

}

bool Labourer::move_agent(GoapAction nextAction)
{
    return true;
}

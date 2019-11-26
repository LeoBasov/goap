#include "labourer.h"

Labourer::Labourer()
{
    this->world_state["has_wood"] = false;
    this->goal_state["has_wood"] = true;
}

Labourer::~Labourer()
{

}


std::map<std::string, bool> Labourer::get_world_state () const
{
    return this->world_state;
}

std::map<std::string, bool> Labourer::create_goal_state () const
{
    return this->goal_state;
}

void Labourer::plan_failed (std::map<std::string, bool> )
{

}

void Labourer::plan_found (std::map<std::string, bool> , std::stack<std::shared_ptr<GoapAction>> )
{

}

void Labourer::actions_finished ()
{

}

void Labourer::plan_aborted (const std::shared_ptr<GoapAction> &)
{

}

bool Labourer::move_agent(const std::shared_ptr<GoapAction> &)
{
    return true;
}

void Labourer::modify_state(const std::string& key, const bool& value)
{
    this->world_state[key] = value;
}

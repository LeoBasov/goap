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

void Labourer::planFailed (std::map<std::string, bool> failedGoal)
{

}

void Labourer::planFound (std::map<std::string, bool> goal, std::stack<std::shared_ptr<GoapAction>> actions)
{

}

void Labourer::actionsFinished ()
{

}

void Labourer::planAborted (GoapAction aborter)
{

}

bool Labourer::moveAgent(GoapAction nextAction)
{
    return true;
}

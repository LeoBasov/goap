#pragma once

#include "../../src/igoap.h"

class Labourer : public IGoap
{
public:
    Labourer();
    ~Labourer() override;


    std::map<std::string, bool> get_world_state () const  override;
    std::map<std::string, bool> create_goal_state () const  override;
    void planFailed (std::map<std::string, bool> failedGoal)  override;
    void planFound (std::map<std::string, bool> goal, std::stack<std::shared_ptr<GoapAction>> actions)  override;
    void actionsFinished ()  override;
    void planAborted (GoapAction aborter)  override;
    bool moveAgent(GoapAction nextAction)  override;
};

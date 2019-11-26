#pragma once

#include "../../src/igoap.h"

class Labourer : public IGoap
{
public:
    Labourer();
    ~Labourer() override;


    std::map<std::string, bool> get_world_state () const  override;
    std::map<std::string, bool> create_goal_state () const  override;
    void plan_failed (std::map<std::string, bool> failed_goal_state)  override;
    void plan_found (std::map<std::string, bool> goal_state, std::stack<std::shared_ptr<GoapAction>> actions)  override;
    void actions_finished ()  override;
    void plan_aborted (GoapAction aborter)  override;
    bool move_agent(GoapAction nextAction)  override;
};

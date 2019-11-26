#pragma once

#include "../../../src/goapaction.h"

class ChopWood : public GoapAction
{
public:
    ChopWood();
    ~ChopWood() override;

    bool is_done() const override;
    bool check_procedural_precondition(const std::shared_ptr<GameObject>& agent) override;
    bool perform(const std::shared_ptr<GameObject>& agent) override;
    bool requires_in_range() override;

    void reset() override;
};

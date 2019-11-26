#include "chopwood.h"

ChopWood::ChopWood()
{
    add_effect("has_wood", true);
}

ChopWood::~ChopWood()
{

}

bool ChopWood::is_done() const
{
    return this->done;
}

bool ChopWood::check_procedural_precondition(const std::shared_ptr<IGoap>& )
{
    return true;
}

bool ChopWood::perform(const std::shared_ptr<IGoap>& agent)
{
    agent->modify_state("has_wood", true);
    this->done = true;

    return this->done;
}

bool ChopWood::requires_in_range()
{
    return true;
}

void ChopWood::reset()
{
    this->done = false;
}

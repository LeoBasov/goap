#include "goapaction.h"

GoapAction::GoapAction()
{

}

GoapAction::~GoapAction()
{

}

void GoapAction::do_reset()
{
    this->in_range = false;
    this->target = nullptr;
    reset();
}

const std::map<std::string, bool>& GoapAction::get_preconditions() const
{
    return this->preconditions;
}

const std::map<std::string, bool>& GoapAction::get_effects() const
{
    return this->effects;
}

bool GoapAction::get_is_in_range() const
{
    return this->in_range;
}

double GoapAction::get_cost() const
{
    return this->cost;
}

void GoapAction::set_is_in_range(bool in_range)
{
    this->in_range = in_range;
}

void GoapAction::add_precondition(const std::string& key, bool value)
{
    const auto ret_pair(this->preconditions.insert({key, value}));

    if(!ret_pair.second){
        throw std::exception();
    }
}

void GoapAction::remove_precondition(const std::string& key)
{
    const size_t removed_elems(this->preconditions.erase(key));

    if(!removed_elems){
        throw std::exception();
    }
}

void GoapAction::add_effect(const std::string& key, bool value)
{
    const auto ret_pair(this->effects.insert({key, value}));

    if(!ret_pair.second){
        throw std::exception();
    }
}

void GoapAction::remove_remove(const std::string& key)
{
    const size_t removed_elems(this->effects.erase(key));

    if(!removed_elems){
        throw std::exception();
    }
}

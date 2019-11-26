#pragma once

#include <map>
#include <memory>
#include <exception>

#include "igoap.h"

class GoapAction
{
public:
    GoapAction();
    virtual ~GoapAction();

    virtual bool is_done() const = 0;
    virtual bool check_procedural_precondition(const std::shared_ptr<IGoap>& agent) = 0;
    virtual bool perform(const std::shared_ptr<IGoap>& agent) = 0;
    virtual bool requires_in_range() = 0;

    void do_reset();

    const std::map<std::string, bool>& get_preconditions() const;
    const std::map<std::string, bool>& get_effects() const;
    bool get_is_in_range() const;
    double get_cost() const;

    void set_is_in_range(bool in_range);
    void add_precondition(const std::string& key, bool value);
    void remove_precondition(const std::string& key);
    void add_effect(const std::string& key, bool value);
    void remove_remove(const std::string& key);

    std::shared_ptr<IGoap> target = nullptr;

protected:
    std::map<std::string, bool> preconditions;
    std::map<std::string, bool> effects;
    bool in_range = false;
    double cost = 1.0;

    virtual void reset() = 0;
};

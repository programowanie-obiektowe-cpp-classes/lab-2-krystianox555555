#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    double get() { return R->get(); }
    ResourceManager() { R = new Resource; }
    ~ResourceManager() { delete R; }
    ResourceManager(const ResourceManager& Rm) : R{Rm.R} 
    { 
        R = new Resource{*Rm.R}; 
    }
    ResourceManager& operator=(ResourceManager Rm)
    {
        if (R == Rm.R) {
        }
        else {
            delete R;
            R = new Resource{*Rm.R};
        }
        return *this;
    }

private:
    Resource* R;
};

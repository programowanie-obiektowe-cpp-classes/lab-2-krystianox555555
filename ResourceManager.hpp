#pragma once
#include<iostream>
#include "Resource.hpp"
using namespace std;


class ResourceManager
{
    // Twoja implementacja tutaj
public :
    double* wektor;
    ResourceManager(int n)
    {
        int h = 0;
        std::cout << "witam" << std::endl;
        wektor =new double[n];

    };
    ~ResourceManager() { delete[] wektor; };
    double get() { return res->get(); }
    ResourceManager() { res = new Resource; }
    ResourceManager(const ResourceManager& Rm) : res{ Rm.res }
    {
        res = new Resource{ *Rm.res };
    }

    ResourceManager& operator=(ResourceManager Rm)
    {
        if (res == Rm.res) {
        }
        else {
            delete res;
            res = new Resource{ *Rm.res };
        }
        return *this;
    }


private :
    int dlugosc;
    double get()
    {
        return dlugosc;
    }
    Resource* res;
    //const unsigned int n = 100;
   
    ~ResourceManager() { delete res; }

};

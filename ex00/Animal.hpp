#pragma once

#include <iostream>
#include <iomanip>
#include "colours.hpp"


class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string name);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &assign);
     ~Animal();
    virtual void makeSound() const;
    virtual std::string getType() const;
};


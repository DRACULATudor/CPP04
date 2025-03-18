#pragma once

#include <iostream>
#include <iomanip>
#include "Colours.hpp"
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string name);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &assign);
    virtual ~Animal();
    virtual void makeSound() const;
    virtual std::string getType() const;
};

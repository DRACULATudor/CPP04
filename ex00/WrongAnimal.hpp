#pragma once

#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string __type;
public:
    WrongAnimal();
    ~WrongAnimal();
    virtual void makeSound() const;
    virtual std::string gettype() const;
};

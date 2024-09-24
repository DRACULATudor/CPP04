#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    virtual void makeSound() const;
    virtual std::string gettype() const;
};

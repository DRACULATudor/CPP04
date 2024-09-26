#pragma once

#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string __type;
public:
    WrongAnimal();
    WrongAnimal(std::string __type);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal  &operator=(const WrongAnimal &assign);
    ~WrongAnimal();
    virtual void makeSound() const;
    virtual std::string gettype() const;
};

#pragma once

#include <iostream>
#include <iomanip>
#include "Colours.hpp"

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
    void makeSound() const;
    std::string gettype() const;
};

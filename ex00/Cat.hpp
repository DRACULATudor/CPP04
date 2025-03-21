#pragma once

#include "Animal.hpp"
#include "Colours.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &assign);
    virtual ~Cat();
    virtual void makeSound() const;
    virtual std::string getType() const;
};

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(const Dog &copy);
    Dog &operator=(const Dog &assign);
    virtual ~Dog();
    virtual void makeSound() const;
    virtual std::string getType() const;
};

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &assign);
    virtual ~Cat();
    virtual void makeSound() const;
    virtual std::string getType() const;
    Brain   *getBrain();
};

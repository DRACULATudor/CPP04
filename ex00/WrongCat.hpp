#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &assing);
    ~WrongCat();
    virtual void makeSound() const;
    virtual std::string gettype() const;
};

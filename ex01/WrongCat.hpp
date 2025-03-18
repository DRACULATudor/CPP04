#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string name);
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &assing);
    ~WrongCat();
    void makeSound() const;
    std::string gettype() const;
};

#pragma once

#include <iostream>
#include <iomanip>


class Animal
{
protected:
    std::string _type;
public:
    Animal();
     ~Animal();
    virtual void makeSound() const;
    virtual std::string getType() const;
};


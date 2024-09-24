#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : __type("Wrong Animal") {}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound()const
{
    std::cout << gettype() << " can't communivate" << std::endl;
}

std::string WrongAnimal::gettype()const
{
    return this->__type;
}
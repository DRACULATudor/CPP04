#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    __type = "Cat";
}

WrongCat::~WrongCat() {}

void WrongCat::makeSound()const
{
    std::cout << gettype() << "" << std::endl;
}

std::string WrongCat::gettype()const
{
    return this->__type;
}
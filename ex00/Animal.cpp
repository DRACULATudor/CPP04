#include "Animal.hpp"

Animal::Animal() : _type("Snail"){}

Animal::~Animal(){}

void Animal::makeSound() const
{
    std::cout << _type << " Makes no sound !" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}
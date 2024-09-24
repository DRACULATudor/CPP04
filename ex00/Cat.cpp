#include "Cat.hpp"

Cat::Cat()  
{
    _type = "Cat";
}

Cat::~Cat(){}

void Cat::makeSound()const
{
    std::cout << _type << " mewos like a tiger !" << std::endl;
}

std::string Cat::getType()const 
{
    return this->_type;
}
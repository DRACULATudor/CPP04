#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
}

Dog::~Dog(){}

void Dog::makeSound() const
{
    std::cout << _type << " Barks !" << std::endl;
}
    
std::string Dog::getType()const 
{
    return this->_type;
}

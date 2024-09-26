#include "Animal.hpp"

Animal::Animal() : _type("Snail")
{
    std::cout << PURPLE << this->_type << " Default constructor called !" << std::endl;
}

Animal::Animal(std::string name): _type(name)
{
    std::cout << PURPLE << this->_type << " Parameter default constructor called !" << std::endl;
}

Animal::Animal(const Animal &assign) : _type(assign._type)
{
    std::cout << PURPLE << this->_type << " Copy constructor called !" << std::endl;
}

Animal::~Animal()
{
    std::cout << PURPLE << this->_type << " Deconstructor called !" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << PURPLE << _type << " Makes no sound !" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}
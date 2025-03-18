#include "Animal.hpp"

Animal::Animal() : _type()
{
    this->_type = "No animal";
    std::cout << PURPLE << this->_type << " Animal default constructor called !" << std::endl;
}

Animal::Animal(std::string name): _type(name)
{
    this->_type = "No animal";
    std::cout << PURPLE << this->_type << " Animal parameterized constructor called !" << std::endl;
}

Animal::Animal(const Animal &assign) : _type(assign._type)
{
    std::cout << PURPLE << this->_type << "Animal copy constructor called !" << std::endl;
}

Animal &Animal::operator=(const Animal &assign)
{
    if (this != &assign)
    {
        this->_type = assign._type;
        std::cout << PURPLE << "Animal assignment operator called" << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << PURPLE << this->_type << " Animal deconstructor called !" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << PURPLE << _type << " Makes no sound !" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

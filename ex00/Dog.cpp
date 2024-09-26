#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << RED << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
    std::cout << RED << "Dog copy constructor called" << std::endl;
    this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &assign)
{
    if (this != &assign)
    {
        this->_type = assign._type;
        std::cout << RED << "Dog copy assign constructor called" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << RED << "Dog Deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " Barks !" << std::endl;
}

std::string Dog::getType() const
{
    return this->_type;
}

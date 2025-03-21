#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << RED << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(std::string name) : Animal(name)
{
    if (name != "Dog")
        this->_type = "Dog";
    std::cout << RED << this->_type << " Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << RED << "Dog copy constructor called" << std::endl;
    this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &assign)
{
    if (this != &assign)
    {
        this->_type = assign._type;
        std::cout << RED << "Dog copy assignment constructor called" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << RED << "Dog Deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << RED << _type << " Bark bark bark !" << std::endl;
}

std::string Dog::getType() const
{
    return this->_type;
}

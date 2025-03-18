#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    std::cout << RED << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(std::string name) : Animal(name), brain(new Brain())
{
    if (name != "Dog")
        this->_type = "Dog";
    std::cout << RED << this->_type << " Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << RED << "Dog copy constructor called" << std::endl;
    this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &assign)
{
    if (this != &assign)
    {
        this->_type = assign._type;
        delete brain;
        brain = new Brain(*assign.brain);
        std::cout << RED << "Dog copy assignment constructor called" << std::endl;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << RED << _type << " Bark bark bark !" << std::endl;
}

std::string Dog::getType() const
{
    return this->_type;
}

Brain   *Dog::getBrain()
{
    return brain;
}

Dog::~Dog()
{
    delete brain;
    std::cout << RED << "Dog Deconstructor called" << std::endl;
}

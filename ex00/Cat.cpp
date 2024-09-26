#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << GREEN << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal("cat")
{
    std::cout << GREEN << "Cat copy constructor called" << std::endl;
    this->_type = copy._type;
}

Cat::~Cat()
{
    std::cout << GREEN << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
    if (this != &assign)
    {
        this->_type = assign._type;
        std::cout << GREEN << "Cat assing constructor called" << std::endl;
    }
    return *this;
}

void Cat::makeSound()const
{
    std::cout << _type << GREEN << " mewos like a tiger !" << std::endl;
}

std::string Cat::getType()const 
{
    return this->_type;
}
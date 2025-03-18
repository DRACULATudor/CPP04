#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : __type("Wrong Animal")
{
    std::cout << PURPLE << "Default wrong animal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): __type(name)
{
    std::cout << PURPLE << this->__type << " Parameter default constructor called !" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : __type(copy.__type) 
{
    std::cout << "Copy wrong animal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    if (this != &assign)
    {
        this->__type = assign.__type;
        std::cout << "Assignment wrong animal constructor called" << std::endl;
    }
    return *this;
} 

WrongAnimal::~WrongAnimal()
{
    std::cout << PURPLE << "Deconstructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << gettype() << PURPLE << " can't communicate" << RESET << std::endl;
}

std::string WrongAnimal::gettype() const
{
    return this->__type;
}

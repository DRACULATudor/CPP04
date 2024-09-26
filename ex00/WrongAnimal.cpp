#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->__type = "Wrong Animal";
    std::cout << "Default wrong animal constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(std::string name): __type(name)
{
    std::cout << PURPLE << this->__type << " Parameter default constructor called !" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->__type = "Wrong Animal";
    std::cout << "Copy wrong animal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    if (this != &assign)
    {
        this->__type = assign.__type;
        std::cout << "Copy wrong animal constructor called" << std::endl;
    }
    return *this;
} 

WrongAnimal::~WrongAnimal()
{
    std::cout << "Deconstructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << gettype() << " can't communicate" << std::endl;
}

std::string WrongAnimal::gettype() const
{
    return this->__type;
}

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Default wrong cat constructor called" << std::endl;
    __type = "Cat";
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal("cat")
{
    this->__type = cat.__type;
    std::cout << "Copy wrong cat constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    if (this != &assign)
    {
        this->__type = assign.__type;
        std::cout << "Copy wrong cat assign called" << std::endl;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Copy wrong cat constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << gettype() << "" << std::endl;
}

std::string WrongCat::gettype() const
{
    return this->__type;
}
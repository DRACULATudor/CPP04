#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->__type = "Cat";
    std::cout << GREEN << "Default wrong cat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
    if (name != "cat")
        this->__type = name;
    std::cout << GREEN << "Parameterized wrong cat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal("cat")
{
    this->__type = cat.__type;
    std::cout << GREEN << "Copy wrong cat constructor called" << RESET << std::endl;
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
    std::cout << GREEN << "Deconstructor wrong cat constructor called" << RESET << std::endl;
}

std::string WrongCat::gettype() const
{
    return this->__type;
}

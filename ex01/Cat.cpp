#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    std::cout << GREEN << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type), brain(new Brain()) 
{
    if (type != "Cat")
        this->_type = "Cat";
    std::cout << GREEN << getType() << " Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << GREEN << "Cat copy constructor called" << std::endl;
    this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &assign)
{
    if (this != &assign)
    {
        this->_type = assign._type;
        delete brain;
        brain = new Brain(*assign.brain); 
        std::cout << GREEN << "Cat assingment constructor called" << std::endl;
    }
    return *this;
}

void Cat::makeSound()const
{
    std::cout << GREEN << _type << " mewo mewo mewo !" << std::endl;
}

std::string Cat::getType()const 
{
    return this->_type;
}

Brain   *Cat::getBrain()
{
    return brain;
}

Cat::~Cat()
{
    delete brain;
    std::cout << GREEN << "Cat Deconstructor called" << std::endl;
}

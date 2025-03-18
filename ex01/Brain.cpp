#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
    std::cout << YELLOW << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string name)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = name;
    std::cout << YELLOW << "Brain parameterized constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
    std::cout << YELLOW << "Brain copy operator called" << std::endl;
}

Brain &Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = assign.ideas[i];
	}
    std::cout << YELLOW << "Brain assignment operator called" << std::endl;
    return *this;
}

std::string Brain::getIdeas(int index)
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}

void Brain::setIdeas(int index, const std::string &ides)
{
    if (index >= 0 && index < 100)
        ideas[index] = ides;
}

Brain::~Brain()
{
    std::cout << YELLOW << "Brain deconstructer called" << std::endl;
}

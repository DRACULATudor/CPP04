#pragma once

#include "Animal.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(std::string name);
    Brain(const Brain &copy);
    Brain &operator=(const Brain &assign);
    ~Brain();
    std::string getIdeas(int index);
    void    setIdeas(int index, const std::string &ides);
};

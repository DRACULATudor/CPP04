#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// Test case 1
// int main()
// {
//     Animal Noise;
//     Cat Meow;
//     Dog Bark;

//     Noise.makeSound();
//     Meow.makeSound();
//     Bark.makeSound();
// }

// Test case 2
// int main()
// {
//     const Animal *meta = new Animal();
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     std::cout << PURPLE << meta->getType() << " " << std::endl;
//     std::cout << RED << j->getType() << " " << std::endl;
//     std::cout << GREEN << i->getType() << " " << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete i;
//     delete j;
// }

// Test case 3
int main()
{
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *i = new WrongCat();    
    std::cout << GREEN << i->gettype() << " " << std::endl;
    std::cout << PURPLE << meta->gettype() << " " << RESET <<std::endl;
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
}

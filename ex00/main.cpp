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
//     std::cout << meta->getType() << " " << std::endl;
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete i;
//     delete j;
// }

//Test case 3
int main()
{
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *i = new WrongCat();
    std::cout << i->gettype() << " " << std::endl;
    std::cout << meta->gettype() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
}

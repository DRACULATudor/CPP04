#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Test Case 1

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; 
	delete i;

	return (0);
}


// Test Case 2

// int	main(void)
// {
// 	const Animal *j;
// 	const Animal *i;
// 	for (int x = 0; x < 10; x++)
// 	{
// 		if (x < 5)
// 		{
// 			j = new Dog();
// 			j->makeSound();
// 			delete j;
// 		}
// 		else
// 		{
// 			i = new Cat();
// 			i->makeSound();
// 			delete i;
// 		}
// 	}

// 	return (0);
// }


// Test Case 3(requested by the subject)

// int	main(void)
// {
// 	const Animal *object[20];

// 	for (int i = 0; i < 20; i++)
// 	{
// 		if (i < 10)
// 			object[i] = new Dog();
// 		else
// 			object[i] = new Cat();
// 	}	
// 	for (int i = 0; i < 20; i++)
// 		object[i]->makeSound();
// 	for (int i = 0; i < 20; i++)
// 		delete object[i];
// 	return (0);
// }


// Test Case 4(error on animal to show that the animal class can no longer be implemented)

// int	main(void)
// {
// 	const Animal *object[20];
// 	const Animal *anima[5];

// 	std::cout << "Before pure virtual implementation:" << std::endl << std::endl;
// 	for (int i = 0; i < 5; i++)
// 		anima[i] = new Animal();
// 	for (int i = 0; i < 5; i++)
// 		anima[i]->makeSound();
// 	for (int i = 0; i < 5; i++)
// 		delete anima[i];
// 	std::cout << std::endl << RESET <<"Subject requested implementation(same as test case 3):" << std::endl << std::endl;
// 	for (int i = 0; i < 20; i++)
// 	{
// 		if (i < 10)
// 			object[i] = new Dog();
// 		else
// 			object[i] = new Cat();
// 	}	
// 	for (int i = 0; i < 20; i++)
// 		object[i]->makeSound();
// 	for (int i = 0; i < 20; i++)
// 		delete object[i];
// 	return (0);
// }

// Test Case 5
// (tesing the functionality of parameterised, copy,
// and assignment operator consturcor + brain)
// + proof of proper implementation of the brain

// int main(void)
// {
// 	std::cout << "Proof that dog orth canon form is working(also for brain creation)" << std::endl;
// 	Dog dog1;
// 	Dog dog2("Dog");
// 	Dog dog3(dog1);
// 	Dog dog4;
// 	dog4 = dog1;

// 	std::cout << "Proof that dog orth canon form is working(also for brain creation)" << std::endl;
// 	Dog cat1;
// 	Dog cat2("cat");
// 	Dog cat3(cat1);
// 	Dog cat4;
// 	cat4 = cat1;

// 	Dog *dog = new Dog();
// 	dog->getBrain()->setIdeas(0, "I want some bones");
// 	std::cout << "Dog idea is: " << dog->getBrain()->getIdeas(0) << std::endl;
// 	delete dog;

// 	Cat *cat = new Cat();
// 	cat->getBrain()->setIdeas(0, "I want some cat food");
// 	std::cout << "Cat idea is: " << cat->getBrain()->getIdeas(0) << std::endl;
// 	delete cat;
// }

#include "Dog.hpp"
#include "Cat.hpp"

#define NUM_ANIMALS 10

// void	print_ideas(Animal **animals)
// {
// 	for (int i = 0; i < NUM_ANIMALS; i++)
// 	{
// 		if (dynamic_cast<Dog*>(animals[i]))
// 			std::cout << dynamic_cast<Dog*>(animals[i])->getBrain()->ideas[i] << std::endl;
// 		else if (dynamic_cast<Cat*>(animals[i]))
// 			std::cout << dynamic_cast<Cat*>(animals[i])->getBrain()->ideas[i] << std::endl;
// 	}
// }

int main()
{
	std::cout << "--- Array ---" << std::endl;
	Animal *animals[NUM_ANIMALS];

	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		if (i < NUM_ANIMALS / 2)
			animals[i] = new Dog("Dog Idea ");
		else
			animals[i] = new Cat("Cat Idea ");
	}

	// std::cout << "--- Ideas ---" << std::endl;
	// print_ideas(animals);

	std::cout << "--- Deep Copy Test ---" << std::endl;
	Dog basic;
	basic.getBrain()->ideas[0] = "Original Idea";
	{
		Dog tmp = *dynamic_cast<Dog*>(animals[0]);
		tmp.getBrain()->ideas[0] = "New Idea";
		std::cout << "Tmp Idea: " << tmp.getBrain()->ideas[0] << std::endl;
	}

	std::cout << "Dog Idea: " << dynamic_cast<Dog*>(animals[0])->getBrain()->ideas[0] << std::endl;

	std::cout << "--- Deleting Animals ---" << std::endl;
	for (int i = 0; i < NUM_ANIMALS; i++)
		delete animals[i];
	return 0;
}

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string idea) : Animal("Dog")
{
	std::cout << "Dog Parameterized Constructor called" << std::endl;
	this->_brain = new Brain(idea);
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignment Operator called" << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}

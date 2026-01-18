#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignment Operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		Animal::operator=(src);
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

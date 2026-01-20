#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain Parameterized Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain Assignment Operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		Brain(std::string idea);
		~Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
};

#endif

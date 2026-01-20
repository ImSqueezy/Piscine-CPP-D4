#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(std::string idea);
		~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		
		void makeSound() const;
		Brain *getBrain() const;
};

#endif

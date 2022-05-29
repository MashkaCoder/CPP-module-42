#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Good Boy");
	const Animal* i = new Cat("Right Kitty");

	const WrongAnimal* wr_meta = new WrongAnimal();
	const WrongAnimal* wr_i = new WrongCat("wrong Kitty :(");
	std::cout << "__________________________________" << std::endl;

	std::cout << "right" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "__________________________________" << std::endl;
	std::cout << "wrong" << std::endl;
	std::cout << wr_i->getType() << " " << std::endl;
	wr_i->makeSound();
	wr_meta->makeSound();

	std::cout << "__________________________________" << std::endl;
	delete j;
	delete i;
	delete meta;
	delete wr_i;
	delete wr_meta;
	return (0);
}

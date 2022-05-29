#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Good Boy");
	const Animal* i = new Cat("Right Kitty");

	std::cout << "__________________________________" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "__________________________________" << std::endl;

	Cat	cat("Smart Kitti");
	Dog	dog("Smart Boy");

	std::cout << "__________________________________" << std::endl;

	cat.setIdea(0, "wonna ice cream!");
	std::cout << cat.getType() << ": "<< cat.getIdea(0) << std::endl;
	dog.setIdea(0, "wonna a vegan beef!");
	std::cout << dog.getType() << ": "<< dog.getIdea(0) << std::endl;

	std::cout << "__________________________________" << std::endl;
	delete j;
	delete i;
	delete meta;
}

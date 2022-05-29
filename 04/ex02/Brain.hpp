#pragma once
#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		virtual ~Brain();

		void		setIdeas(int num, std::string idea);
		std::string	getIdeas(int num)const;
};

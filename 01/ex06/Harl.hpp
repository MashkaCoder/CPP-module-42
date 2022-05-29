#pragma once
#include <iostream>

class Harl
{
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
	public:
		enum _level{
			_debug = 0,
			_info,
			_warning,
			_error,
			_not_matter = -1
		};
		Harl();
		~Harl();
		void	complain(std::string level);
};

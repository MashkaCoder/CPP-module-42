NAME = the_job_of_my_dream

SRC =	Account.cpp\
		tests.cpp\

OBJ = $(SRC:cpp=o)

DEP = $(OBJ:o=d)

RM = rm -f

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ) $(DEP)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

include $(wildcard $(DEP))

NAME=MutantStack
OBJS=main.o
HEADERS=MutantStack.hpp MutantStack.tpp
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -rf

all: ${NAME}

${OBJS}: ${HEADERS}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
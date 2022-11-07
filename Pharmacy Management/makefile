SRCS =	main.c\
		your_choice.c\
		Sort_list.c\
		print.c\
		funct_run.c\
		help.c


OBJS		= $(SRCS:.c=.o)
RM			= rm -f
INC			= allibrc.h
NAME		= Pharmacy
CFLAG		= gcc

all:	$(NAME)

$(NAME):	$(OBJS)
	@${CFLAG} $(OBJS) -o $(NAME)

%.o:%.c $(INC)
	${CFLAG} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
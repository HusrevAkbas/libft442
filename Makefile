CFLAGS := -Wall -Wextra
LIBFT := libft
TARGET := test
SRC := $(wildcard test*/*.c)# $(wildcard tests_bonus/*.c)
all:
	$(MAKE) -C ${LIBFT} bonus
#	valgrind -s --leak-check=full --show-leak-kinds=all 
	cc ${CFLAGS} ${SRC} test.c -L ${LIBFT} -lft -lbsd -o ${TARGET}
	./${TARGET}

clean:
	$(MAKE) -C ${LIBFT} clean
	rm test

show:
	$(MAKE) -C ${LIBFT} show

val:
	${MAKE} -C ${LIBFT} bonus
	cc -g ${CFLAGS} ${SRC} test.c -L ${LIBFT} -lft -lbsd -o ${TARGET}
	valgrind -s --leak-check=yes --show-leak-kinds=all --track-origins=yes ./test

run:
	./${TARGET}
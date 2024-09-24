CFLAGS := -Wall -Wextra
LIBFT := libft
TARGET := test
SRC := $(wildcard test*/*.c)# $(wildcard tests_bonus/*.c)
all:
	$(MAKE) -C ${LIBFT} bonus clean
#	valgrind -s --leak-check=full --show-leak-kinds=all 
	cc ${CFLAGS} ${SRC} test.c -L ${LIBFT} -lft -lbsd -o ${TARGET}
	./${TARGET}
val:
	valgrind -s --leak-check=yes --show-leak-kinds=all test
clean:
	$(MAKE) -C ${LIBFT} clean
	rm test

show:
	$(MAKE) -C ${LIBFT} show

run:
	./${TARGET}
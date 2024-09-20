CFLAGS := -Wall -Wextra
LIBFT := libft
TARGET := test
SRC := $(wildcard tests/*.c)
all:
	$(MAKE) -C ${LIBFT} bonus clean
	cc ${CFLAGS} ${SRC} test.c -L ${LIBFT} -lft -lbsd -o ${TARGET}
	./${TARGET}

clean:
	$(MAKE) -C ${LIBFT} clean
	rm test

show:
	$(MAKE) -C ${LIBFT} show

run:
	./${TARGET}
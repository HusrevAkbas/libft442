#------------------------------------------------------------------------
# PART 1 -- configuration
#------------------------------------------------------------------------
# so far this makefile does not notice changes in the library .c files
#SOURCES		=	$(wildcard *.c)
SOURCES		=	test_main.c test_utils.c test_memory.c test_string.c\
				test_malloc.c test_output.c test_list.c test_char.c
OBJECTS		=	$(SOURCES:.c=.o)
COMP		=	cc
COMPFLAGS	=	-Wall -Wextra 
OUTPUT		=	tester.out
LIBDIR		=	../libft/
LIBNAME		=	libft.a
LIBSHORT	=	ft
#------------------------------------------------------------------------
# PART 2 -- command targets
#------------------------------------------------------------------------
all:	rmlib $(OUTPUT)
rmlib:
	@rm -f $(LIBDIR)$(LIBNAME) $(LIBDIR).bonus
clean:
	@rm -f $(OBJECTS)
	@$(MAKE) -C $(LIBDIR) clean
fclean:	clean
	@rm -f $(OUTPUT)
	@$(MAKE) -C $(LIBDIR) fclean
re: fclean all
#bonus:	$(BONUS:.c=.o)
#	@$(MAKE) -C $(LIBDIR) bonus
#	$(COMP) $(COMPFLAGS) $(BONUS:.c=.o) -L$(LIBDIR) -l$(LIBSHORT) -o bonus.out

.PHONY: all clean fclean re bonus
#------------------------------------------------------------------------
# PART 3 -- file targets
#------------------------------------------------------------------------
$(OUTPUT):	$(LIBDIR)$(LIBNAME) $(OBJECTS)
	$(COMP) $(COMPFLAGS) $(OBJECTS) -lbsd -L$(LIBDIR) -l$(LIBSHORT) -o $@
%.o:		%.c
	$(COMP) $(COMPFLAGS) -g -c -o $@ $<
$(LIBDIR)$(LIBNAME):
	@$(MAKE) -C $(LIBDIR) bonus

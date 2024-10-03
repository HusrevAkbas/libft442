#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#include <strings.h>
#include <bsd/string.h>
#include <stdint.h>
#include <unistd.h>


#define getName(var)	#var

extern char	*string;
extern char	*string2;
extern char	dstbuff[100], dest0[0], dest1[1], dest50[50], dstbuff2[100];
extern char	orgbuff[100], dorg0[0], dorg1[1], dorg50[50], orgbuff2[100];
extern char	*seperator;
extern char	*line;
extern int	integer;

void	prt_seperation_group();
void	prt_separation_test();
void	prt_meminfo(char *test);
size_t	ft_calcprtmem(size_t n);
void	*ft_print_memory(void *addr, unsigned int size);
void	test_memory();
void	test_string();
void	test_malloc();
void	test_output();
void	test_list();
void	test_char();
void	fun_memory();
void	fun_string();
void	fun_malloc();
void	fun_output();
void	fun_list();
void	fun_char();

#include "test.h"

void	ft_print_addr(void *addr, char *hexa);
void	ft_print_hex(unsigned char *character, char *hexa);
void	ft_print_contentashex(unsigned char *character, char *hexa);
void	ft_writeaddr(uintptr_t nbr, char *base, int *counter);
void	ft_putstr_non_printable(char *str, unsigned int size,
			unsigned int counter);

void prt_seperation_group()
{
	// prints function seperation pattern
	printf("%s", seperator);
	printf("%s", line);
}

void prt_separation_test()
{
	// prints individual test seperation
	printf("%s", line);
}

void prt_meminfo(char *test)
{
	printf("\t\t\t--- calling %s ---\n", test);
}

size_t ft_calcprtmem(size_t n)
{
	if (n == 0)
		return (16);
	if (n % 16)
		return (n + (16 - n % 16));
	else
		return (n);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	offset;
	char			hexcnt;
	char			*hexa;

	if (!addr)
		return (NULL);
	hexa = "0123456789abcdef";
	offset = 0;
	while (offset < size)
	{
		ft_print_addr(addr + offset, hexa);
		hexcnt = 0;
		while (hexcnt < 16)
		{
			if ((offset + hexcnt) < size)
				ft_print_hex((unsigned char *)(addr + offset + hexcnt), hexa);
			else
				write(1, "  ", 2);
			hexcnt += 1;
			if (hexcnt % 2 == 0)
				write(1, " ", 1);
		}
		ft_putstr_non_printable(addr + offset, size, offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}

void	ft_print_addr(void *addr, char *hexa)
{
	uintptr_t	converted_address;
	int			counter;

	counter = 0;
	converted_address = (uintptr_t)addr;
	if (converted_address == 0)
	{
		write(1, hexa, 1);
		return ;
	}
	ft_writeaddr(converted_address, hexa, &counter);
	write(1, ": ", 2);
}

void	ft_writeaddr(uintptr_t nbr, char *base, int *counter)
{
	uintptr_t	digit;
	char		*zeros;
	int			amount;

	zeros = "0000000000000000";
	if (nbr)
	{
		digit = nbr % 16;
		(*counter)++;
		ft_writeaddr((nbr / 16), base, counter);
		write(1, &base[nbr % 16], 1);
	}
	if (*counter)
	{
		amount = 16 - *counter;
		if (*counter)
			write(1, zeros, amount);
		*counter = 0;
	}
}

void	ft_print_hex(unsigned char *character, char *hexa)
{
	int	firstdigit;
	int	lastdigit;
	int	remainder;
	int	quotient;

	lastdigit = *character % 16;
	quotient = *character / 16;
	if (quotient > 0)
	{
		while (quotient != 0)
		{
			remainder = quotient % 16;
			quotient /= 16;
		}
		firstdigit = remainder;
	}
	else
		firstdigit = 0;
	write(1, &hexa[firstdigit], 1);
	write(1, &hexa[lastdigit], 1);
}

void	ft_putstr_non_printable(char *str, unsigned int size,
		unsigned int counter)
{
	unsigned int	index;
	unsigned int	range;

	index = 0;
	if (size - counter > 16)
		range = 16;
	else
		range = size - counter;
	while (index < range)
	{
		if (' ' <= str[index] && str[index] < 127)
			write(1, &str[index], 1);
		else
			write(1, ".", 1);
		index++;
	}
}

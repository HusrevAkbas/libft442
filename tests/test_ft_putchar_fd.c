#include "alllibs.h"

void	test_ft_putchar_fd()
{
	int		fd;

	fd = creat("file.txt", 00777);

	if (fd == -1)
	{
		printf("hata: %d", fd);
		return ;
	}

	ft_putchar_fd('H', fd);
	
	close(fd);
}
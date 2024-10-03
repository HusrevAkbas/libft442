#include "alllibs.h"

void	test_ft_putchar_fd()
{
	int		fd;
	char	buff[1000];

	fd = creat("file.txt", 00777);

	if (fd == -1)
	{
		printf("hata: %d", fd);
		return ;
	}

	ft_putchar_fd('H', fd);
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('A', fd);
	ft_putchar_fd('\0', fd);
	close(fd);

	fd = open("file.txt", O_RDONLY, 00777);
	read(fd, buff, 100);
	printf("%s", buff);
}
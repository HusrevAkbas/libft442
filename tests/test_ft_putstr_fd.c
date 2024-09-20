#include "alllibs.h"

void	test_ft_putstr_fd()
{
	int		fd;

	//fd = open("file.txt", O_CREAT | O_APPEND | O_TRUNC, 00777);
	fd = creat("file.txt", 00777);

	if (fd == -1)
	{
		printf("Error fd: %d", fd);
		return;
	}

	ft_putstr_fd("Then this to the file\n", fd);
	ft_putstr_fd("Write this to the file\n", fd);
	ft_putstr_fd("And add this to the file\n", fd);
	
	close(fd);
}
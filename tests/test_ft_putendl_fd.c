#include "alllibs.h"

void	test_ft_putendl_fd()
{
	int		fd;

	//fd = open("file.txt", O_CREAT | O_APPEND | O_TRUNC, 00777);
	fd = creat("file.txt", 00777);

	if (fd == -1)
	{
		printf("Error fd: %d", fd);
		return;
	}

	ft_putendl_fd("Then this to the file", fd);
	ft_putendl_fd("", fd);
	ft_putendl_fd("Write this to the file", fd);
	ft_putendl_fd("", fd);
	ft_putendl_fd("And add this to the file", fd);
	
	close(fd);
}
#include "../tests/alllibs.h"

test_gnl()
{
	int		fd;
	char	*s = "";

	fd = open("test_addons/file3", O_RDONLY);

	while (s)
	{
		s = get_next_line(fd);
		printf("%s", s);
		free(s);
		sleep(1);
	}
}
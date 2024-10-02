#include "alllibs.h"

void	test_my_putnbr_fd(char *test, int n)
{
	int		fd;
	char	buffer[1023];

	printf("\n%s\n%d\n", test, n);
	//fd = open("file.txt", O_CREAT | O_APPEND | O_TRUNC, 00777);
	fd = creat("file.txt", 00777);

	if (fd == -1)
	{
		printf("Error fd: %d", fd);
		return;
	}
	ft_putnbr_fd(n, fd);
	ft_putchar_fd('\0', fd); //put null terminator to stop reading after number
	close(fd);

	fd = open("file.txt", O_RDONLY);
	read(fd, buffer, 1023);
	printf("%s\n", buffer);
	close(fd);
}

void	test_ft_putnbr_fd()
{
	//int i = 0;
	//test_my_putnbr_fd("TEST 1: 0: zero", 0);
	// while (i > -22)
	// {
	// 	test_my_putnbr_fd("Test of:", i--);
	// }

	// i = 99;
	// while (i < 122)
	// {
	// 	test_my_putnbr_fd("my test of", i++);
	// }
	test_my_putnbr_fd("TEST: positiv", 2);
	test_my_putnbr_fd("TEST: negative", -2);
	test_my_putnbr_fd("TEST: positiv", 22);
	test_my_putnbr_fd("TEST: negative", -22);
	test_my_putnbr_fd("TEST: positiv", 222);
	test_my_putnbr_fd("TEST: negative", -222);
	test_my_putnbr_fd("TEST: positiv", 21474836);
	test_my_putnbr_fd("TEST: negative", -21474836);
	test_my_putnbr_fd("TEST: int max P", 2147483647);
	test_my_putnbr_fd("TEST: int min N", -2147483648);
	test_my_putnbr_fd("TEST: a lot of zeros P", 2000000000);
	test_my_putnbr_fd("TEST: a lot of zeros N", -2000000000);
	test_my_putnbr_fd("TEST: zero 0", 0);
}
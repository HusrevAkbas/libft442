#include "test.h"

static void test_issth(int c)
{
	printf("testing character '%c' (%i) with all char functions\n", c, c);
	printf("FT_ISASCII => (%i)\t| ", ft_isascii(c));
	printf("(%i) <= OG_ISASCII\n", isascii(c));
	printf("FT_ISALPHA => (%i)\t| ", ft_isalpha(c));
	printf("(%i) <= OG_ISALPHA\n", isalpha(c));
	printf("FT_ISDIGIT => (%i)\t| ", ft_isdigit(c));
	printf("(%i) <= OG_ISDIGIT\n", isdigit(c));
	printf("FT_ISALNUM => (%i)\t| ", ft_isalnum(c));
	printf("(%i) <= OG_ISALNUM\n", isalnum(c));
	printf("FT_ISPRINT => (%i)\t| ", ft_isprint(c));
	printf("(%i) <= OG_ISPRINT\n", isprint(c));
	prt_separation_test();
}

static void test_tosth(int c)
{
	printf("testing character '%c' (%i) with TOUPPER & TOLOWER\n", c, c);
	printf("FT_TOUPPER => '%c' (%i) | ", ft_toupper(c), ft_toupper(c));
	printf("'%c' (%i) <= OG_TOUPPER\n", toupper(c), toupper(c));
	printf("FT_TOLOWER => '%c' (%i) | ", ft_tolower(c), ft_tolower(c));
	printf("'%c' (%i) <= OG_TOLOWER\n", tolower(c), tolower(c));
	prt_separation_test();
}

void test_char()
{
	// ISASCII ISALPHA ISDIGIT ISALNUM ISPRINT
	prt_seperation_group();
	test_issth('a');
	test_issth('p');
	test_issth('X');
	test_issth('9');
	test_issth('5');
	test_issth('\t');
	test_issth(' ');
	test_issth('#');
	test_issth(127);
	test_issth(128);
	test_issth(255);
	test_issth(30155);
	// test_issth('ä'); // ä is outside integer range? or just outside char literal?
	// TOUPPER TOLOWER
	prt_seperation_group();
	test_tosth('q');
	test_tosth('T');
	test_tosth('\t');
	test_tosth('.');
	test_tosth(255);
	test_tosth(30155);
	//test_tosth('ä');
}

void fun_char()
{
	// ISASCII ISALPHA ISDIGIT ISALNUM ISPRINT
	prt_seperation_group();
	test_issth('a');
	test_issth('5');
	// TOUPPER TOLOWER
	prt_seperation_group();
	test_tosth('q');
	test_tosth('T');
}
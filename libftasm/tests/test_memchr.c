

#include "libftasm.h"


void test_memchr(void)
{
	char 	str1[STRING_SIZE];
	char 	str2;
	int		i;

	i = 0;
	while (i < STRING_SIZE)
	{
		str1[i] = '1';
		i++;
	}
	str1[STRING_SIZE / 2] = '2';
	str2 = '2';
	printf("%p %p   %c %c\n", memchr(str1, str2, STRING_SIZE), ft_memchr(str1, str2, STRING_SIZE), *(char *)memchr(str1, str2, STRING_SIZE), *(char *)ft_memchr(str1, str2, STRING_SIZE));
	if (memchr(str1, str2, STRING_SIZE) != ft_memchr(str1, str2, STRING_SIZE))
		test_error("memchr", 0);
	else
		test_succes("memchr");
}

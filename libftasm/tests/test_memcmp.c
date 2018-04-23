
#include "libftasm.h"

void test_memcpm(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	int		i;
	int		ret_val1;
	int		ret_val2;

	i = 0;
	while (i < STRING_SIZE)
	{
		str1[i] = '1';
		str2[i] = '1';
		i++;
	}
	str1[0] = '\200';
	str2[0] = '\000';
	ret_val1 = ft_memcmp(str2, str1, 1);
	ret_val2 = memcmp(str2, str1, 1);
	printf("memcmp : %i  vs  %i \n", ret_val1, ret_val2);
	if (ret_val1 != ret_val2) {
		test_error("memcmp", ret_val2);
		test_error("ft_memcmp", ret_val1);
	}
	else
		test_succes("memcmp");

}


#include "libftasm.h"

void test_strcpm(void)
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
	str1[i - 1] = 0;
	str2[i - 1] = 0;
	str1[i - 2] = 8;
	str2[i - 2] = 123;
	ret_val1 = ft_strcmp(str2, str1);
	ret_val2 = strcmp(str2, str1);
	printf("strcmp : %i  vs  %i \n", ret_val1, ret_val2);
	if (ret_val1 != ret_val2) {
		test_error("strcmp", ret_val2);
		test_error("ft_strcmp", ret_val1);
	}
	else
		test_succes("strcmp");

}

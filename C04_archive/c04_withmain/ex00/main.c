#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Hello";
	int	len;

	len = ft_strlen(str);
	printf("%d\n", len);
	return ((len == 5) ? 0 : 1);
}

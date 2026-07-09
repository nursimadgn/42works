#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0') 
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return(str);
}

int main()
{
	char array1[] = "abAB";

	char *ptr = ft_strlowcase(array1);

	while(*ptr)
	{
		write(1, ptr, 1);
		ptr++;
	}

	return(0);
}
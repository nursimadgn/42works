#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{

	int i;
	int j;

	i = 0;
	j = 0;

	while(dest[j])
	{
		j++;
	}

	while(src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}

	dest[j + i] = '\0';

	return(dest);
}

int main()
{

	char array1[10] = "ilk ";
	char array2[] = "son";

	char *ptr = ft_strncat(array1, array2, 0);

	printf("%s", ptr);

	return(0);
}
#include <stdio.h>

char 	*ft_strcat(char *dest, char *src)
{

	int i;
	int j;

	i = 0;
	j = 0;

	while(dest[j])
	{
		j++; 
	}

	while(src[i] != '\0')
	{
		dest[j + i] = src [i];
		i++;
	}

	dest[j + i] = '\0';

	return(dest);

}

int main()
{

	char array1[] = "ilk";
	char array2[] = "";

	char *ptr = ft_strcat(array1, array2);

	printf("%s", ptr);

}

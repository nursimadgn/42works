#include <unistd.h> 

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)
{

	unsigned int i;
	i = 0;
	
	unsigned int size_src;
	size_src = 0;

	while(src[size_src])
	{
		size_src++;
	}

	if(size == 0)
	{
		return(size_src);			
	}
	
	while(i < (size - 1) && src [i] != '\0')
	{
			
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return(size_src);
}

int	main() 
{

	char array1[4] = "123"; 
	char array2[] = "cdb";

	int deneme = ft_strlcpy(array1, array2, 3) + '0';

	write(1, &deneme, 2);
	write(1, "\n", 2);

	int i = 0;

	while(array1[i])
	{
		write(1, &array1[i], 1);
		i++;
	}
	
	return(0);
}
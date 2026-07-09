#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	i = 0;


	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0'; /*src nula geldiğinde az olduğunda destten 
												burası çalışıyor*/
		i++;
	}

	return(dest);
}

int main()
{

	char array1[3] = "123"; 
	char array2[] = "cd";

	char *deneme2;

	deneme2 = ft_strncpy(array1, array2, 4);
	

	printf("%s", deneme2);
	
	return(0);
}
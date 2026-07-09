#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src) {

	int i;
	i = 0;

	
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		 
		i++;
	}
	dest[i] = '\0';
	return(dest);

}

int main()
{
	char array1[5] = " "; 
	char array2[] = "abcd";

	char *deneme2;

	deneme2 = ft_strcpy(array1, array2);
	

	printf("%s", deneme2);
	
	return(0);
}


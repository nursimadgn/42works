#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	i = 0;

	if(n == 0)
	{
		return(0);
	}

	while(s1[i] != '\0' && s2[i] != '\0' && i < n )
	{
		if(s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return(s1[i] - s2[i]); 
		}
	}
	return(s1[i] - s2[i]);
}

int main() 
{

	char array1[] = "a";
	char  *ptr = "c";

	int deneme = ft_strncmp(array1, ptr, 0);
	
	printf("%d", deneme);

	return(0);
}

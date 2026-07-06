#include <stdio.h> 


/* mynot: to_find boş iise str döndür, to_find içinde geçmiyorsa null dönmeli*/

char 	*ft_strstr(char *str, char *to_find)
{

	int i;
	int j;

	i = 0;
	j = 0;

	if(to_find[i] == '\0')
	{
		return(str);
	}

	while(str[i])
	{
		while(str[i] && str[i + j] == to_find[j]) 
		{	
			return(str + i);
			j++;
		}
		i++;
	}

	return(0);
}

int main()
{


	char array1[] = "hello worldw";
	char tofind[] = "w";
	
	char *ptr = ft_strstr(array1, tofind);

	printf("%s", ptr);

	return(0);
}
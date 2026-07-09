#include <unistd.h>

char 	*ft_strupcase(char *str){

	int i;
	i = 0;


	while(str[i] != '\0')
	{

		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		
		i++;
	}

	return(str);
}

int main()
{

	char str[] = "ABb cd";

	int i = 0;

	char *ptr = ft_strupcase(str);
	
	while(*ptr)
	{
		write(1, ptr, 1);
		ptr++;
	}
	return(0);
}


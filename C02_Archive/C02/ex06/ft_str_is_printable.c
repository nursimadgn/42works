#include <unistd.h>

int	ft_str_is_printable(char *str){

	int i;
	i = 0;

	while(str[i] != '\0')
	{

		if(!(str[i] >= 32 && str[i]<= 126))
		{

			return(0);
		}
		i++;
	}
	return(1);
}

int main()
{
char array1[] = "";
int deneme = ft_str_is_printable(array1) + '0';
write(1, &deneme, 1);
return(0);
}

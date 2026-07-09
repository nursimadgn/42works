#include <unistd.h>

int ft_str_is_lowercase(char *str) {

	int i;
	i = 0;

	while(str[i] != '\0')
	{

		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return(0);		
		}
		i++;
	}
	return(1);
}

int main() {

char array1[] = "abde";

int deneme;

deneme = ft_str_is_lowercase(array1) + '0';

write(1, &deneme, 1);

return(0);

}
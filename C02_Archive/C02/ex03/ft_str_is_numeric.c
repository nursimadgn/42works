#include <unistd.h>
#include <stdio.h>

int     ft_str_is_numeric(char *str) {

    int i;
    i = 0;

    while(str[i] != '\0')
    {

        if(!(str[i] >= '0' && str[i] <= '9'))
        {

            return(0);
        }
        i++;
    }
    return(1);
}

int main() {

    char array1[] = "12";

    int deneme;

    deneme = ft_str_is_numeric(array1) + '0'; 

    write(1, &deneme, 1);
   
    return(0);
}
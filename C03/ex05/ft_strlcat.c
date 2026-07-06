#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;
    unsigned int j;

	j = 0;
	i = 0;
    
    dest_len = 0;
    while(dest[dest_len])
    {
        dest_len++;
    }

    src_len = 0;
    while(src[src_len])
    {
        src_len++;
    }

    if(size <= dest_len)
    {
        return(size + src_len);
    }
    
    i = dest_len;
    
    while (src[j] != '\0' && i < (size - 1))
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return(dest_len + src_len);
}

int main(void)
{
    char array1[20] = "helaa";
    char array2[] = "world";

    int deneme = ft_strlcat(array1, array2, 15);

    printf("%s", array1);

    return (0);
}
int	ft_atoi(char *str);

int	main(void)
{
	return ((ft_atoi("   -42abc") == -42) ? 0 : 1);
}

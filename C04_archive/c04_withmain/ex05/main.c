int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	return ((ft_atoi_base("7f", "0123456789abcdef") == 127) ? 0 : 1);
}

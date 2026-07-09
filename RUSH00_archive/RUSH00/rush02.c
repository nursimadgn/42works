#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int x, char left, char mid, char right)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(left);
		else if (col == x)
			ft_putchar(right);
		else
			ft_putchar(mid);
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x <= 0 || y <= 0)
		return;
	row = 1;
	while (row <= y)
	{
		if (row == 1)
			print_row(x, 'A', 'B', 'A');
		else if (row == y)
			print_row(x, 'C', 'B', 'C');
		else
			print_row(x, 'B', ' ', 'B');
		row++;
	}
}

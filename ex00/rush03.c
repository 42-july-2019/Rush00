/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 17:12:31 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/07 20:17:33 by dbey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		check_if_valid(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Error : one of the parameters is smaller than 1", 47);
		return (0);
	}
	return (1);
}

void	print_adequate_char(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && j == 1))
		ft_putchar('A');
	else if ((i == 1 && j == x) || (i == y && j == x))
		ft_putchar('C');
	else if (i == 1 || i == y || j == 1 || j == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (check_if_valid(x, y) == 1)
	{
		i = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				print_adequate_char(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

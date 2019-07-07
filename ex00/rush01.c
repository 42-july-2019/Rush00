/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:43:56 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/07 15:35:41 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;


	if(x <= 0 || y <= 0)
	{
		int index;
		char *message = "Error : one of the parameters is smaller than 1";

		while (message[index] != '\0')
		{
			ft_putchar(message[index]);
			index++;
		}
	}
	else {
		i = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				if (i == 1 && j == 1)
					ft_putchar('/');
				else if (i == y && j == x && i != 1 && j != 1)
					ft_putchar('/');
				else if ((i == y && j == 1) || (i == 1 && j == x))
					ft_putchar('\\');
				else if (i == 1 || i == y || j == 1 || j == x)
					ft_putchar('*');
				else
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

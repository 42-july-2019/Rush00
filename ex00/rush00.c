/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zathouma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:58:18 by zathouma          #+#    #+#             */
/*   Updated: 2019/07/07 17:33:47 by zathouma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
		int i;
		int j;
	
		i = 1;
		while (i <= y)
		{
				j = 1;
				while (j <= x)
				{
						if ((i == 1 && j == 1) || (i == y && j == x))
								ft_putchar('o');
						else if ((i == y && j == 1) || (i == 1 && j == x))
								ft_putchar('o');
						else if (i == 1 || i == y)
								ft_putchar('-');
						else if (j == 1 || j == x)
								ft_putchar('|');
						else
								ft_putchar(' ');
						j++;
				}
				ft_putchar('\n');
				i++;
		}
}

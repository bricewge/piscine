/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 17:20:04 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/06 23:30:59 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	static int triple[3] = {'0', '1', '2'};

	while (triple[0] <= '7')
	{
		while (triple[1] <= '8')
		{
			while (triple[2] <= '9')
			{
				if ((triple[2] != triple[1]) && (triple[1] != triple[0]))
				{
					ft_putchar(triple[0]);
					ft_putchar(triple[1]);
					ft_putchar(triple[2]);
					if ((triple[0] == '7') && (triple[1] == '8') && (triple[2] == '9'))
						ft_putchar('.');
					else
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
				triple[2]++;
			}
			triple[2] = (triple[1] + 1);
			triple[1]++;
		}
		triple[1] = (triple[0] + 1);
		triple[0]++;
	}
}

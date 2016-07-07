/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 17:20:04 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/07 21:21:08 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int one, int two, int three)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(three);
	if (!((one == '7') && (two == '8') && (three == '9')))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int triple[3];

	triple[0] = '0';
	triple[1] = '1';
	triple[2] = '2';
	while (triple[0] <= '7')
	{
		while (triple[1] <= '8')
		{
			while (triple[2] <= '9')
			{
				if ((triple[2] != triple[1]) && (triple[1] != triple[0]))
					print(triple[0], triple[1], triple[2]);
				triple[2]++;
			}
			triple[2] = (triple[1] + 1);
			triple[1]++;
		}
		triple[1] = (triple[0] + 1);
		triple[0]++;
	}
}

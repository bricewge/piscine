/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 08:10:01 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/07 12:36:16 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int one, int two, int three, int four)
{
	if (one <= '2')
	{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(' ');
	ft_putchar(three);
	ft_putchar(four);
	ft_putchar(',');
	ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	static	int array[4] = {'0', '0', '0', '0'};

	while (array[0] <= '9')
	{
		while (array[2] <= '9')
		{
			print(array[0], array[1], array[2], array[3]);
			if (array[3] == '9')
			{
				array[3] = '0';
				array[2]++;
			}
			if (array[3] < '9')
				array[3]++;
		}
		if (array[1] == '9')
		{
			array[1] = '0';
			array[0]++;
		}
		if (array[1] < '9')
			array[1]++;
	}
}

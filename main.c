/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:20:07 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/08 11:27:03 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_is_negative(int n);
void ft_print_numbers(void);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_print_combn(int	n);

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

int main(void)
{
	ft_print_alphabet();
	ft_print_reverse_alphabet();
	ft_print_numbers();
	ft_is_negative(3);
	ft_is_negative(0);
	ft_is_negative(-1);
	ft_print_comb();
	ft_print_comb2();
	ft_putnbr(42);
	ft_print_combn(n);
}

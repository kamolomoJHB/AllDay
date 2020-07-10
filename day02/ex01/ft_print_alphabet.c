/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:41:34 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/10 09:52:35 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_reverse_alphabet(void)
{
    char z;
	char a;
	z = 'z';
	a = 'a';
	while(z>=a)
	{
		ft_putchar(z);
		z--;
	}
}	
int main(void)
{
    ft_print_reverse_alphabet();
}

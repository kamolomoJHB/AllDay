/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:10:58 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/10 09:40:16 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
     void ft_print_alphabet(void)
	 {
	     char a;
	     char z;
	      a = 'a';
          z = 'z';
	while (a<=z)
	{
		ft_putchar(a);
     	a++;
	}
			
		}

int main(void)
{
	ft_print_alphabet();
}

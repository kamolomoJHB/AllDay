/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:54:35 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/10 10:01:39 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_print_numbers(void)
{
    char start;
	char end;
	start = '0';
	end = '9';
	while(start<=end)
	{
	    ft_putchar(start);
		start++;
	}
}
int main(void)
{
    ft_print_numbers();
}

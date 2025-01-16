/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 22:37:11 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/16 20:50:20 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);

int main(void)
{
	ft_putnbr(123);
	ft_putchar('\n');
	ft_putnbr(200);
	ft_putchar('\n');
	ft_putnbr(300);
	ft_putchar('\n');
	ft_putnbr(-400);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}

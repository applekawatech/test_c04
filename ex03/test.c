/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:59:22 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/16 23:06:29 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

int	ft_atoi(char *str);

void	test(char *str)
{
	if (ft_atoi(str) == atoi(str))
			printf("Ok");
	else
			printf("KO");
	printf("  str = %s, ft_atoi = %i, atoi = %i\n", 
					str, ft_atoi(str), atoi(str));	
}

int	main(void)
{
	test("---+--+1234ab567");
	test(" ---+--+1234ab567");
	return (0);
}

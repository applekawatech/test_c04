/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:37:37 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/17 11:44:48 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

void	test(char *str)
{
	printf("Length of \"%s\" = %i\n", str, ft_strlen(str));
}

int	main()
{
		test("Hi, i am georgy");
		test("01234567");
		test("");
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaoufi <ayoub.laaoufi@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:04:19 by aylaaoufi         #+#    #+#             */
/*   Updated: 2024/08/22 16:23:02 by aylaaoufi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int main()
{
	char a[] = "ayoub";
	printf("%zu\n", ft_strlen(a));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaoufi <ayoub.laaoufi@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:36:06 by aylaaoufi         #+#    #+#             */
/*   Updated: 2024/08/22 18:11:31 by aylaaoufi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	unsigned int	i;
	size_t	len = ft_strlen(s1);

	s2 = (char *)malloc(len + 1);
	i = 0;
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int main()
{
	printf("%s\n", ft_strdup("Hello World!"));
}*/

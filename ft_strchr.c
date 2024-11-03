/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:47:29 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/11/03 17:29:15 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;
	char cc;

    i = 0;
	cc = (char)c;
    while (s[i])
    {
        if (s[i] == cc)
        {
            return (char *)(&s[i]);
        }
        i++;
    }
    if (s[i] == cc)
    {
        return (char *)(&s[i]);
    }
    return (NULL);
}

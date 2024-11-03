/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:19:25 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/11/03 17:28:56 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *last;
	char cc;

    i = 0;
    last = NULL;
	cc = (char)c;
    while (s[i])
    {
        if (s[i] == cc)
        {
            last = (char *)&s[i];
        }
        i++;
    }
    if (s[i] == cc)
    {
        return (char *)&s[i];
    }
    return (last);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:47:29 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/25 10:58:31 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            return (char *)(&s[i]);
        }
        i++;
    }
    if (c == '\0')
    {
        return (char *)(&s[i]);
    }
    return (NULL);
}
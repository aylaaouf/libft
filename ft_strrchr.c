/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:10:37 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/27 16:27:00 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *last;

    i = 0;
    last = NULL;
    while (s[i])
    {
        if (s[i] == (char)c && s[i + 1] != c)
        {
            last = (char *)&s[i];
        }
        i++;
    }
    if (c == '\0')
    {
        return (char *)&s[i];
    }
    return (last);
}
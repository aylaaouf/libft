/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:19:25 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/25 11:58:13 by aylaaouf         ###   ########.fr       */
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
        if (s[i] == c)
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
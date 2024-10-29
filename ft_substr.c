/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:09:06 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/27 16:21:10 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;
    size_t len_s;

    i = 0;
    if (!s)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        len = 0;
    else if (len > len_s - start)
        len = len_s - start;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    while (s[(size_t)start] && i < len)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}
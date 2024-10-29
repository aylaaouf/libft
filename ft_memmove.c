/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:15:29 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/24 19:12:29 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;
    int j;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    i = 0;
    j = len - 1;
    if (!s && !d)
        return (NULL);
    if (d > s)
    {
        while (j >= 0)
        {
            d[j] = s[j];
            j--;
        }
    }
    else
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dst);
}
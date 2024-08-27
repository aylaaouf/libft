/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:04:34 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/27 08:32:23 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s1;
    const unsigned char *s2;
    size_t i;

    s1 = (unsigned char *)dst;
    s2 = (const unsigned char *)src;
    i = 0;
    if (s1 > s2)
    {
        while (len > 0)
        {
            s1[len] = s2[len];
            len--;
        }
    }
    else
    {
        while (i < len)
        {
            s1[i] = s2[i];
            i++;
        }
    }
    return (dst);
}
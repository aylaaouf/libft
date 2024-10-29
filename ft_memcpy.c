/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:53:03 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/24 20:42:58 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;
    if (!d || !s)
        return (NULL);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
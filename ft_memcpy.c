/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 03:18:41 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/24 04:27:40 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *s1;
    const unsigned char *s2;

    s1 = (unsigned char *)dst;
    s2 = (const unsigned char *)src;
    if (!s1 || !s2)
    {
        return (NULL);
    }
    i = 0;
    while (i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return (dst);
}
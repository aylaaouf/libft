/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:00:45 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/24 22:39:55 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t len_d;
    size_t len_s;

    j = 0;
    len_d = ft_strlen(dst);
    len_s = ft_strlen(src);
    if (dstsize <= len_d)
        return (len_d + len_s);
    i = len_d;
    while (src[j] && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (len_d + len_s);
}
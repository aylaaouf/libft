/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:45:01 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/27 00:15:05 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t len_dst;
    size_t len_src;

    j = 0;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
    i = len_dst;
    while (src[j] && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (len_dst + len_src);
}
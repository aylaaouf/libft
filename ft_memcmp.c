/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:37:13 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/31 03:58:28 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const char *str1;
    const char *str2;

    i = 0;
    str1 = (const char *)s1;
    str2 = (const char *)s2;
    while (str1 && str2 && str1[i] == str2[i] && i < n)
        i++;
    return (str1[i] - str2[i]);
}
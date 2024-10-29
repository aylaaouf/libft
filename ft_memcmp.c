/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:17:08 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/26 15:27:02 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a;
    const unsigned char *b;
    size_t i;

    a = (const unsigned char *)s1;
    b = (const unsigned char *)s2;
    i = 0;
    while (a[i] && b[i] && a[i] == b[i] && i < n)
        i++;
    return (a[i] - b[i]);
}
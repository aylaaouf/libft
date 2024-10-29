/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:35:48 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/25 15:08:45 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)s;
    while (str[i] && i < n)
    {
        if (str[i] == c)
        {
            return (void *)&str[i];
        }
        i++;
    }
    return (NULL);
}
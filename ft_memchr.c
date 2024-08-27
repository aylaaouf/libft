/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:58:10 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/27 22:15:27 by aylaaouf         ###   ########.fr       */
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
        if (str[i] == (unsigned char)c)
        {
            return (void *)&str[i];
        }
        i++;
    }
    return (NULL);
}
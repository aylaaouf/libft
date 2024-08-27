/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:05:16 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/27 01:28:09 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *str;
    size_t i;
    
    str = (char *)b;
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = (char)c;
        i++;
    }
    return (b);
}
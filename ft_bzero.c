/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:54:49 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/26 02:19:56 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)s;
    while (i < len)
    {
        str[i] = 0;
        i++;
    }
}
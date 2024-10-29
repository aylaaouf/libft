/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:17:08 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/26 17:41:50 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t total;
    unsigned char *ptr;

    total = count * size;
    ptr = malloc(total);
    if (!ptr)
    {
        return (NULL);
    }
    ft_memset(ptr, 0, total);
    return (ptr);
}
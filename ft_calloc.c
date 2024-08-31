/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 05:21:20 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/31 05:44:50 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t total;
    void *ptr;

    total = count * size;
    ptr = malloc(total);
    if (ptr == NULL)
    {
        return (NULL);
    }
    ft_memset(ptr, 0, total);
    return (ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:46:14 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/27 14:53:11 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *ptr;
    int len;
    
    ptr = (char *)malloc(ft_strlen(s1) + 1);
    len = ft_strlen(s1);
    if (!ptr)
    {
        return (NULL);
    }
    ft_memcpy(ptr, s1, len);
    ptr[len] = '\0';
    return (ptr);
}
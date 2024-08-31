/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 04:56:37 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/31 04:56:40 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[0] == '\0')
        return (char *)(haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && needle[j] == haystack[i + j] && (i + j) < len)
        {
            j++;
        }
        if (needle[j] == '\0')
        {
            return (char *)(&haystack[i]);
        }
        i++;
    }
    return (NULL);
}
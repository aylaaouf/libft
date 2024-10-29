/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:24:18 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/27 16:54:50 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return (NULL);
    size_t i;
    size_t j;
    size_t len;
    char *str;
    

    i = 0;
    j = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}
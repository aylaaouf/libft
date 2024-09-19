/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:57:59 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/09/18 17:41:39 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_match(char c, char const *set)
{
    size_t i;
    
    i = 0;
    while (set[i])
    {
        if (set[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t start;
    size_t end;
    size_t i;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1) - 1;
    i = 0;
    while (s1[start] && ft_match(s1[start], set))
        start++;
    while (s1[end] && ft_match(s1[end], set))
        end--;
    str = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!str)
        return (NULL);
    while (start <= end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}
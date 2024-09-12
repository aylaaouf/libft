/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:57:43 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/09/12 17:46:27 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return (NULL);
    char *ptr;
    int i;
    int j;
    
    ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    i = 0;
    j = 0;
    if (!ptr)
        return (NULL);
    while (s1[i])
    {
        ptr[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        ptr[j] = s2[i];
        i++;
        j++;
    }
    ptr[j] = '\0';
    return (ptr);
}
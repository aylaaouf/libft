/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:40:40 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/27 23:23:33 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count(char const *str, char c)
{
    int count;
    int init;

    count = 0;
    init = 0;
    while (*str)
    {
        if (*str != c && init == 0)
        {
            init = 1;
            count++;
        }
        else if (*str == c)
        {
            init = 0;
        }
        str++;
    }
    return (count);
}

char *ft_copy(char *str, int start, int end)
{
    char *word;
    int i;

    word = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!word)
        return (NULL);
    i = 0;
    while (start < end)
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int start;
    int i;
    int j;
    int words;

    if (!s)
        return (NULL);
    i = 0;
    j = 0;
    words = ft_count(s, c);
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (start < i)
        {
            result[j] = ft_copy((char *)s, start, i);
            j++;
        }
    }
    result[j] = NULL;
    return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:32:06 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/09/23 23:06:57 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(const char *str, char c)
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
    return count;
}

char *copy(char *str, int start, int end)
{
    char *word;
    int i;

    word = malloc((end - start + 1) * sizeof(char));
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
    int i;
    int j;
    int start;
    int words;

    if (!s)
        return (NULL);
    
    words = count_words(s, c);
    result = (char **)malloc((words + 1) * sizeof(char *));
    i = 0;
    j = 0;
    if (!result)
        return (NULL);
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
        {
            result[j] = copy((char *)s, start, i);
            j++;
        }
    }
    result[j] = (NULL);
    return (result);
}
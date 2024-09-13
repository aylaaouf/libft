/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:57:59 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/09/12 18:08:21 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    int i;
    int j;
    int x;

    ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    i = 0;
    j = 0;
    x = 0;
    if (!ptr)
        return (NULL);
    while (s1[i])
    {
        if (s1[i] != set[j])
        {
            ptr[x++] = s1[i];
            j++;
            x++;
        }
        i++;
    }
    ptr[x] = '\0';
    return (ptr);
}

int main() {
    char *str = "  Hello, world!  ";
    char *set = " \t\n";
    char *result = ft_strtrim(str, set);

    printf("%s\n", result); // Output: Hello, world!

    free(result); // Don't forget to free the allocated memory
    return 0;
}
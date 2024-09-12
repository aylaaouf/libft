/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:47:17 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/09/12 12:42:20 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s2;
    int i;

    if (start >= ft_strlen(s))
    {
        return (NULL);
    }
    s2 = (char *)malloc(len + 1);
    i = 0;
    if (!s2)
    {
        return (NULL);
    }
    while (s[(size_t)start] && (size_t)i < len)
    {
        s2[i] = s[start];
        i++;
        start++;
    }
    s2[i] = '\0';
    return (s2);
}

int main() {
    char *str = "hello world";
    char *substr = ft_substr(str, 4, 5);

    printf("Substring: %s\n", substr); // Output: "llo w"

    free(substr);
    return 0;
}
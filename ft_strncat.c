/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 00:13:05 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/24 00:17:40 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    int i;
    size_t j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        i++;
    }
    while (s2[j] && j < n)
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}

int main() {
    char s1[20] = "Hello";
    char s2[] = " World";

    ft_strncat(s1, s2, 3);
    printf("%s\n", s1); // Output: Hello Wo
    return 0;
}
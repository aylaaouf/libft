/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:22:09 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/29 20:54:04 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    long num;
    char *str;
    int len;

    num = n;
    len = (n <= 0) ? 1 : 0;
    while (num)
    {
        num /= 10;
        len++;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    num = n;
    if (num < 0)
    {
        num *= -1;
    }
    while (len--)
    {
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    if (n < 0)
    {
        str[0] = '-';
    }
    return (str);
}
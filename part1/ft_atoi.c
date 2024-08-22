/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 00:19:45 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/08/23 00:40:26 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] <= 32 || str[i] == 127)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}
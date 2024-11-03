/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:15:18 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/10/31 16:34:30 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return ;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
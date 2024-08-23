/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:58:21 by aylaaoufi         #+#    #+#             */
/*   Updated: 2024/08/23 21:28:30 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int     ft_tolower(int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int     ft_atoi(const char *str);

#endif

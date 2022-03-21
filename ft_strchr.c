/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickard <brickard@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:21:24 by brickard          #+#    #+#             */
/*   Updated: 2021/10/29 17:02:16 by brickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)s;
	while (s2[i] != (char)c)
	{	
		if (s2[i] == '\0')
			return (NULL);
		i++;
	}
	return (&s2[i]);
}

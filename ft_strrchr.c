/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickard <brickard@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:45:33 by brickard          #+#    #+#             */
/*   Updated: 2021/10/26 22:37:11 by brickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickard <brickard@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:01:20 by brickard          #+#    #+#             */
/*   Updated: 2021/10/31 16:58:43 by brickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*nee;
	char	*hay;

	i = 0;
	nee = (char *)needle;
	hay = (char *)haystack;
	if (!nee[i])
		return (&hay[i]);
	if (len == 0)
		return (NULL);
	while (hay[i] && i < len)
	{
		j = 0;
		while (i + j < len && hay[i + j] == nee[j])
		{
			j++;
			if (nee[j] == '\0')
				return (&hay[i]);
		}
		i++;
	}
	return (NULL);
}

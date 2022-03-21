/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickard <brickard@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:33:08 by brickard          #+#    #+#             */
/*   Updated: 2021/10/29 16:49:19 by brickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t res_size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;
	size_t	j;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = 0;
	j = dst_size;
	if (res_size == 0)
		return (src_size);
	if (res_size < dst_size)
		return (res_size + src_size);
	while (src[i] && (j < (res_size - 1)))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_size + src_size);
}

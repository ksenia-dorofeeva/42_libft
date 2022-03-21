/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickard <brickard@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:16:00 by brickard          #+#    #+#             */
/*   Updated: 2021/10/31 18:41:27 by brickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_str(char const *s, char c)
{
	size_t	nb;
	size_t	i;

	nb = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nb);
}

static char	**ft_alloc(char const *s, char c)
{
	char	**result;

	result = (char **)malloc((ft_nb_str(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

static void	ft_free(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free (result);
}

static char	**ft_process(char **result, char const *s, char c, size_t i)
{
	size_t	start;
	size_t	len;
	size_t	j;

	j = 0;
	while (s[i])
	{
		len = 0;
		if (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		start = i - len;
		if (s[i - 1] != c)
		{
			result[j++] = ft_substr(s, start, len);
			if (&ft_substr == NULL)
				ft_free(result, j);
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	result = ft_alloc(s, c);
	if (result == NULL)
		return (NULL);
	ft_process(result, s, c, i);
	return (result);
}

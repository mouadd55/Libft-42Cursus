/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:26:37 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/02 22:21:54 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free (&str[i]);
		i++;
	}
	free (str);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	i = 0;
	if (s == 0)
		return (0);
	str = malloc((ft_word(s, c) + 1) * sizeof(char *));
	if (str == 0)
		return (0);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			str[i] = ft_substr(s, 0, ft_lenword(s, c));
			if (str[i] == '\0')
				return (free_arr(str));
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	str[i] = 0;
	return (str);
}

// int main ()
// {
// 	int i;
// 	char **s;

// 	i = 0;
// 	s = ft_split("  Hello  1337  Khouribga", ' ');
// 	while (s[i])
// 	{
// 		printf("%s\n", s[i]);
// 		i++;
// 	}
// }

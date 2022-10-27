/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:47:59 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/25 08:57:49 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	if (len == 0 || (start >= ft_strlen(s)))
		return (ft_strdup(""));
	dest = malloc(len * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (j < ft_strlen(s) && i < len)
	{
		dest[i] = s[j];
		j++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

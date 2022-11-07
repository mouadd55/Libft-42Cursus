/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:47:59 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/06 21:12:32 by moudrib          ###   ########.fr       */
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
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	dest = malloc(len * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (j < ft_strlen(s) && i < len)
		dest[i++] = s[j++];
	dest[len] = '\0';
	return (dest);
}

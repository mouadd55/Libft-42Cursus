/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:43:50 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/27 09:35:52 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find == 0 && str == 0 && len == 0)
		return (NULL);
	if (*to_find == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (to_find[j] == str[i + j] && str[i + j] && (i + j) < len)
			j++;
		if (!to_find[j])
			return ((char *)str + i);
		j = 0;
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:56:16 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/13 12:21:23 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*srcc;
	size_t		i;

	dest = (char *)dst;
	srcc = (const char *)src;
	i = 0;
	if (!dest && !srcc)
		return (NULL);
	if (dest > srcc)
	{
		while (len-- > 0)
		{
			dest[len] = srcc[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}

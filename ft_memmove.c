/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:56:16 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/04 10:33:07 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srcc;
	size_t	i;

	dest = (char *)dst;
	srcc = (char *)src;
	i = 0;
	if (dest == 0 && srcc == 0)
		return (NULL);
	if (dest > srcc)
	{
		while (len-- > 0)
			dest[len] = srcc[len];
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

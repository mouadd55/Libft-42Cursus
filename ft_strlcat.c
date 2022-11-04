/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:58:24 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/04 10:34:51 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	i = 0;
	lsrc = ft_strlen(src);
	if (dst == 0 && dstsize == 0)
		return (lsrc);
	ldst = ft_strlen(dst);
	if (dstsize > ldst + 1)
	{
		while (ldst + i + 1 < dstsize && src[i])
		{
			dst[ldst + i] = src[i];
			i++;
		}
	}
	if (dstsize < ldst + 1)
		return (dstsize + lsrc);
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}

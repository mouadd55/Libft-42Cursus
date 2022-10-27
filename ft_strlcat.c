/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:58:24 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/24 17:02:42 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if ((!src && !dst) || dstsize == 0)
		return (lsrc);
	if (ldst >= dstsize)
		return (dstsize + lsrc);
	if (lsrc < dstsize - ldst)
		ft_memcpy (dst + ldst, src, lsrc + 1);
	else
	{
		ft_memcpy (dst + ldst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (lsrc + ldst);
}

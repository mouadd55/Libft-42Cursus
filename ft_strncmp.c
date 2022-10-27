/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:46:51 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/26 17:42:30 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*_s1;
	unsigned char	*_s2;
	size_t			i;

	_s1 = (unsigned char *) s1;
	_s2 = (unsigned char *) s2;
	i = 0;
	while ((_s1[i] || _s2[i]) && (i < n))
	{
		if (_s1[i] > _s2[i])
			return (1);
		else if (_s1[i] < _s2[i])
			return (-1);
		i++;
	}
	return (0);
}

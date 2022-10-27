/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:18 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/25 15:53:46 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = -1;
	str = malloc((len1 + len2) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i++ < len1)
		str[i] = s1[i];
	i = -1;
	while (i++ < len2)
		str[len1 + i] = s2[i];
	str[len1 + i] = '\0';
	return (str);
}

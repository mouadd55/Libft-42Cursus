/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:17:32 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/25 15:54:50 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
//    this function 
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "Heeeelllooooo";
// 	printf("%s\n", ft_strchr(s, 'e' + 256));
// 	printf("%s", strchr(s, 'e' + 256));
// }
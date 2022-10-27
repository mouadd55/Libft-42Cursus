/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:47:30 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/26 15:14:42 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	a = 256;
// 	int	b = 127;
// 	ft_memset(&a ,b, 4);
// 	printf("%d\n", a);
// 	// char str[] = "Hello World!";
// 	// printf("%s\n", ft_memset(str, '.', 5));
// }
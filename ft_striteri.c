/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:12:54 by moudrib           #+#    #+#             */
/*   Updated: 2022/11/02 22:37:17 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void fun(unsigned int i, char *str)
// {
// 	//(void)i;
// 	*str = 'M';
// 	//i++;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// int main ()
// {
// 	char s[] = "Mouad";
// 	ft_striteri(s, &fun);
// 	printf("%s", s);
// }
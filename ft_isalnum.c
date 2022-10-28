/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:28:42 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/27 18:11:55 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)
		|| (ch >= 48 && ch <= 57))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:45:24 by moudrib           #+#    #+#             */
/*   Updated: 2022/10/28 13:36:25 by moudrib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main()
// {
// 	int fd;

// 	fd = open("test.txt" , O_CREAT | O_RDWR, 0777);
// 	ft_putchar_fd('M', fd);
// 	printf("%d\n", fd);
// 	fd = open("test1.txt" , O_CREAT | O_RDWR, 0777);
// 	ft_putchar_fd('f', fd);
// 	printf("%d\n", fd);
// 	fd = open("test2.txt" , O_CREAT | O_RDWR, 0777);
// 	ft_putchar_fd('f', fd);
// 	printf("%d\n", fd);
// 	fd = open("test3.txt" , O_CREAT | O_RDWR, 0777);
// 	ft_putchar_fd('f', fd);
// 	printf("%d\n", fd);
// 	fd = open("test4.txt" , O_CREAT | O_RDWR, 0777);
// 	ft_putchar_fd('f', fd);
// 	printf("%d\n", fd);
// }
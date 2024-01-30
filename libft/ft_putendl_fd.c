/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:17:00 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:28 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char str[5] = "coco";
// 	int fd;
// 	fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
// 	ft_putendl_fd(str, fd);
// 	close(fd);
// }
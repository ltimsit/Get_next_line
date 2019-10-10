/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:05:19 by ltimsit-          #+#    #+#             */
/*   Updated: 2019/07/04 18:09:30 by ltimsit-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(int c, char **v)
{
	int fd;
	int ret;
	char *line;
	fd = open(v[1], O_RDONLY);
	ret = 0;

	while ((ret = get_next_line(fd, &line)))
	{
		ft_putendl(line);
		free(line);
	}
	return (0);
}

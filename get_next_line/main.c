/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:59:09 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/29 19:17:52 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int fd;
	char *line;
	
	fd = open("test.txt", O_RDONLY);
	for (int i = 0; i < 10; i++)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free (line);
	}
	return (0);
}

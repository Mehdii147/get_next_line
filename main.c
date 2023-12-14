/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:30:55 by ehafiane          #+#    #+#             */
/*   Updated: 2023/12/14 20:39:49 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

void	f()
{
	system("leaks a.out");
}

int main()
{
	int	fd = open("1char.txt", O_RDWR | O_CREAT, 0777);
	write(fd, NULL, 1);
	lseek(fd, 0, SEEK_SET);
char	*tt = get_next_line(fd);
printf("%s", tt);
free(tt);
atexit(f);
}
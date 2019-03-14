/*
** EPITECH PROJECT, 2018
** gnl
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

int	my_str_is_num(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

void	not_null()
{
	write(1, "Error: invalid input", 20);
	write(1, " (positive number expected)\n", 28);
}

int	gnl()
{
	static	int	stop = 0;
	int		i = 0;
	char		*str = malloc(sizeof(char) * 10000);
	char		buffer = '0';

	if (stop == -1)
		return (-84);
	while (buffer != '\n') {
		if (read(0, &buffer, 1) == 0)
			return (-84);
		str[i++] = buffer;
	}
	if (str[i - 1] == '\0')
		stop = -1;
	str[i - 1] = '\0';
	if (my_str_is_num(str) == -1) {
		not_null();
		return (-1);
	}
	i = getnb(str);
	return (i);
}

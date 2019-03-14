/*
** EPITECH PROJECT, 2018
** tab
** File description:
** 
*/

#include <unistd.h>
#include "../include/my.h"

int	creat_tab(int *tab, int size)
{
	int	pipes = 1;
	int	i = 0;

	while (i != size) {
		tab[i++] = pipes;
		pipes += 2;
	}
	return (0);
}

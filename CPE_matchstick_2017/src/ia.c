/*
** EPITECH PROJECT, 2018
** ia
** File description:
** 
*/

#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stddef.h>
#include "../include/my.h"

void	endtakematch(int line, int matche)
{
	write(1, "Player removed ", 15);
	my_putnb(matche);
	write(1, " match(es) from line ", 21);
	my_putnb(line);
	my_putchar('\n');
}

int	*turn_ia(int *tab, int size, int maxtake)
{
	int	rline;
	int	rmatche;

	srand(time(NULL));
	while (tab[(rline = rand() % size)] == 0);
	if (tab[rline] < maxtake)
		rmatche = 1 + rand() % tab[rline];
	else
		rmatche = 1 + rand() % maxtake;
	write_ia(rmatche, (rline + 1));
	tab = take_matche(tab, rline, rmatche, maxtake);
	return (tab);
}
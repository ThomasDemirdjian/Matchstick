/*
** EPITECH PROJECT, 2018
** game
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

int	cont_matche(int *tab, int size)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i != size)
		nb += tab[i++];
	return (nb);
}

int	*take_matche(int *tab, int line, int matche, int maxtake)
{
	if (tab[line] < matche)
		write(1, "Error: not enough matches on this line\n", 39);
	else if (matche > maxtake) {
		write(1, "Error: you cannot remove more than ", 35);
		my_putnb(maxtake);
		write(1, " matches per turn\n", 18);
	}
	else
		tab[line] -= matche;
	return (tab);
}

int	my_turn_line(int line, int size)
{
	write(1, "Line: ", 6);
	line = gnl();
	if (line == -84)
		return (84);
	if ((line < 1 || line > size) && line != -1)
		write(1, "Error: this line is out of range\n", 33);
	return (line);
}

int	my_turn_matche(int matche)
{
	write(1, "Matches: ", 9);
	matche = gnl();
	if (matche == -84)
		return (84);
	if (matche == 0) {
		write(1, "Error: you have to remove", 25);
		write(1, " at least one match\n", 20);
	}
	return (matche);
}

int	my_turn(int *tab, int size, int maxtake, int verifturn)
{
	int	line = 0;
	int	matche = 0;

	while ((line < 1 || line > size) || matche < 1) {
		while (line < 1) {
			line = my_turn_line(line, size);
			if (line == 84)
				return (84);
		}
		matche = my_turn_matche(matche);
		if (matche == 84)
			return (84);
		if (matche == -1 || matche == 0)
			line = -1;
	}
	tab = take_matche(tab, (line - 1), matche, maxtake);
	if (verifturn != cont_matche(tab, size))
		endtakematch(line, matche);
	if (cont_matche(tab, size) == 0)
		return (1);
	return (0);
}
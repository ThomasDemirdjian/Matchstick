/*
** EPITECH PROJECT, 2018
** main
** File description:
** 
*/

#include <unistd.h>
#include "../include/my.h"

int	my_strlen(char *str)
{
	int	i = 0;

	while (str[i++] != '\0');
	return (i - 1);
}

void	my_putnb(int nbr)
{
	int	diviseur = 1000000000;
	int	result;

	while (nbr / diviseur == 0)
		diviseur = diviseur / 10;
	while (diviseur != 0) {
		result = nbr / diviseur;
		diviseur /= 10;
		result = result % 10;
		my_putchar(result + 48);
	}
}

int	getnb(char *av)
{
	int	rst = 0;
	int	result = 0;
	int 	i = my_strlen(av) - 1;
	int	mult =1;

	while (av[i] != 0) {
		result = av[i] - 48;
		rst += result * mult;
		mult = mult * 10;
		i--;
	}
	return (rst);
}

int	orga(int size, int maxtake)
{
	int	tab[size - 1];
	int	verifturn;
	int	stop = 0;
	int	ret;

	creat_tab(tab, size);
	while (cont_matche(tab, size) != 0) {
		verifturn = cont_matche(tab, size);
		show_tab(tab, size);
		write(1, "\nYour turn:\n", 12);
		while (verifturn == cont_matche(tab, size) && stop != 84)
			stop = my_turn(tab, size, maxtake, verifturn);
		if (stop == 84)
			return (0);
		if (stop != 1) {
			show_tab(tab, size);
			turn_ia(tab, size, maxtake);
		}
	}
	show_tab(tab, size);
	return (endgame(stop));
}

int	main(int ac, char **av)
{
	int	size;
	int	maxtake;
	int	ret;

	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
			help();
			return (0);
		}
	}
	if (ac != 3)
		return (84);
	size = getnb(av[1]);
	maxtake = getnb(av[2]);
	if (size > 0 && size <= 100 && maxtake > 0) {
		ret = orga(size, maxtake);
		return (ret);
	}
	else
		return (84);
}
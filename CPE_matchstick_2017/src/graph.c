/*
** EPITECH PROJECT, 2018
** graph
** File description:
** 
*/

#include <unistd.h>
#include "../include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	show_line(int size)
{
	int	i = 0;

	while (i++ != (size * 2 + 1))
		my_putchar('*');
	my_putchar('\n');
}

void	show_space_a(int space)
{
	int	i = 0;

	while (i++ != space)
		my_putchar(' ');
}

void	show_space_b(int size, int k, int space)
{
	int	i = 0;
	int	c = (size * 2 - 1) - k - space;

	while (i++ != c)
		my_putchar(' ');
}

void	show_tab(int *tab, int size)
{
	int	i = 0;
	int	k = 0;
	int 	space = (size - 1);

	show_line(size);
	while (i != size) {
		k = 0;
		my_putchar('*');
		show_space_a(space);
		while (k != tab[i]) {
			my_putchar('|');
			k++;
		}
		show_space_b(size, k, space--);
		i++;
		my_putchar('*');
		my_putchar('\n');
	}
	show_line(size);
}
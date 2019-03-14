/*
** EPITECH PROJECT, 2018
** write
** File description:
** 
*/

#include <unistd.h>
#include "../include/my.h"

void	write_ia(int rmatche, int rline)
{
	write(1, "AI's turn...\n", 13);
	write(1, "AI removed ", 11);
	my_putnb(rmatche);
	write(1, " match(es) from line ", 21);
	my_putnb(rline);
	my_putchar('\n');
}

int	endgame(int a)
{
	if (a == 0) {
		write(1, "I lost... snif... but I'll get you", 34);
		write(1, " next time!!\n", 13);
		return (1);
	}
	else {
		write(1, "You lost, too bad...\n", 21);
		return (2);
	}
}
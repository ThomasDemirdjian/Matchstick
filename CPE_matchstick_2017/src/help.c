/*
** EPITECH PROJECT, 2018
** help
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

void	help()
{
	write(1, "\nUSAGE: ./matchstick [line] [max_matches]\n", 42);
	write(1, "\n\tline = number of line of the matchstick.", 42);
	write(1, "\n\tmax_matches = number max of matches you", 41);
	write(1, " can take.\n\n", 12);
}
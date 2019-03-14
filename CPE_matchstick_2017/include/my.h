/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** 
*/

#ifndef MY_H_
# define MY_H_

int	main(int ac, char **av);
int	getnb(char *av);
int	my_strlen(char *str);
int	orga(int size, int maxtake);
int	cont_matche(int *tab, int size);
int	creat_tab(int *tab, int size);
int	scale(int *tab, int size);
int	endgame(int a);
int	my_turn(int *tab, int size, int maxtake, int verifturn);
int	*turn_ia(int *tab, int size, int maxtake);
int	*take_matche(int *tab, int line, int matche, int maxtake);
int	gnl();
void	write_ia(int rmatche, int rline);
void	endtakematch(int line, int matches);
void	my_putnb(int nbr);
void	help();
void	my_putchar(char c);
void	show_line(int size);
void	show_space_a(int space);
void	show_space_b(int size, int k, int space);
void	show_tab(int *tab, int size);

#endif /* !MY_H_ */

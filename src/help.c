/*
** EPITECH PROJECT, 2018
** help
** File description:
** runner
*/

#include "../include/my.h"

int help(int ac, char **av)
{
	if (av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr("Finite runner created with CSFML.\n\n\n");
		my_putstr("USAGE\n\n./my_runner map.text map don't use\n\n\n");
		my_putstr("OPTIONS\n\n-h\t\tprint the usage and quit.\n\n\n");
		my_putstr("USER INTERACTIONS\n\nSPACE_KEY\tjump.\n");
		my_putstr("YOU HAVE ONLY ONE CHANCE.\n");
	}
	return (0);
}

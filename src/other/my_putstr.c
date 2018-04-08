/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** runner
*/

#include "../../include/my.h"

void my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i = i + 1;
	write(1, str, i);
}

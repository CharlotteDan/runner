/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** runner
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (src[i] != src[n]) {
		dest[i] = src [i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

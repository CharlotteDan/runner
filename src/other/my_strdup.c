/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** runner
*/

#include "../../include/my.h"

char *my_strdup (char const *src)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * (strlen(src) + 1));

	while (src[i] != '\0') {
		str[i] = src[i];
		i++;
	}
	return (str);
}

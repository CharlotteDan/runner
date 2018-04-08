/*
** EPITECH PROJECT, 2018
** itoa & revstr
** File description:
** runner
*/

#include <stdlib.h>

char *my_revstr(char *str)
{
	int deb = 0;
	int end = 0;
	char change;

	while (str[deb] != '\0') {
		deb += 1;
	}
	deb -= 1;
	while (deb > end) {
		change = str[deb];
		str[deb] = str[end];
		str[end] = change;
		deb -= 1;
		end += 1;
	}
	return (str);
}

char *my_itoa(int nb)
{
	int count = 0;
	char *str = malloc(sizeof(char) * 4096);

	str[count + 1] = '\n';
	str[count + 1] = '\0';
	while (nb > 9) {
		str[count] = (nb % 10 + '0');
		count = count + 1;
		nb = nb / 10;
	}
	str[count] = (nb % 10 + '0');
	str = my_revstr(str);
	return (str);
}

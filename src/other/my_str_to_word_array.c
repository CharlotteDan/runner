/*
** EPITECH PROJECT, 2018
** str_to_word_array
** File description:
** runner
*/

#include "../../include/my.h"

int charinf (char c)
{
	if (c != ' ')
		return (1);
	else
		return (0);
}

int count_word (char const *str)
{
	int count = 0;
	int i = 0;
	char c = str[i];

	while (str[i] != '\0') {
		c = str[i];
		if (i == 0)
			count += charinf(c);
		else if (charinf(str[i -1]) == 0)
			count += charinf(c);
		i++;
	}
	return (count);
}

int cut_word (char const *str, char** tab, int n)
{
	int i = 0;
	int j = 0;
	char *res;

	while (str[i] != '\0' && charinf(str[i]) == 0)
		i++;
	j = i + 1;
	while (str[j] != '\0' && charinf(str[j]) == 1)
		j++;
	res = malloc(j - i);
	tab[n] = my_strncpy(res, str + i, j - i);
	return (j);
}

char **my_str_to_word_array (char const *str)
{
	char *s = my_strdup(str);
	int sizetab = count_word(str) + 1;
	char **tab = malloc(sizeof(char*) * sizetab);
	int i = 0;
	int j = 0;

	tab[sizetab - 1] = 0;
	while(i < sizetab - 1){
		j += cut_word(s + j, tab, i);
		i++;
	}
	return (tab);
}

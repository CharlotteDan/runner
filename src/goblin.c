/*
** EPITECH PROJECT, 2018
** sprite_goblin
** File description:
** runner
*/

#include "../include/my.h"

void move_sprite(clocking_t *clock, sfIntRect *rectangle)
{
	clock->time = sfClock_getElapsedTime(clock->clock);
	clock->second = (clock->time.microseconds);
	if ((clock->second) >= (111111)) {
		if (rectangle->left > 120) {
			rectangle->left = 0;
		}
		rectangle->left += 24;
		sfClock_restart(clock->clock);
	}
}

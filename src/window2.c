/*
** EPITECH PROJECT, 2018
** window2
** File description:
** runner
*/

#include "../include/my.h"

void display_sprite(background_t *bg)
{
	create_background(bg);
	position_goblin(bg);
	position_obstacle(bg);
}

int score2(clocking_t *clock, int score)
{
	clock->clock = sfClock_create();
	clock->time = sfClock_getElapsedTime(clock->clock);
	clock->second = (clock->time.microseconds);
	if ((clock->second) >= (3)) {
		score = score + 1;
		sfClock_restart(clock->clock);
	}
	return (score);
}

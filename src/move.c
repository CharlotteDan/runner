/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** move
*/

#include "../include/my.h"

void move_bg1(sfobject *bg1, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = -0.004;
	sfRenderWindow_drawSprite(window, bg1->sprite, NULL);
	sfSprite_move(bg1->sprite, move);
}

void move_bg3(sfobject *bg3, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = 0.2;
	sfRenderWindow_drawSprite(window, bg3->sprite, NULL);
	sfSprite_move(bg3->sprite, move);
}

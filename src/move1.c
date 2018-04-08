/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** move1
*/

#include "../include/my.h"

void move_bg4(sfobject *bg4, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = -0.1;
	sfRenderWindow_drawSprite(window, bg4->sprite, NULL);
	sfSprite_move(bg4->sprite, move);
}

void move_bg5(sfobject *bg5, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = -0.3;
	sfRenderWindow_drawSprite(window, bg5->sprite, NULL);
	sfSprite_move(bg5->sprite, move);
}

void move_bg6(sfobject *bg6, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = -0.5;
	sfRenderWindow_drawSprite(window, bg6->sprite, NULL);
	sfSprite_move(bg6->sprite, move);
}

void move_bg7(sfobject *bg7, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = -0.8;
	sfRenderWindow_drawSprite(window, bg7->sprite, NULL);
	sfSprite_move(bg7->sprite, move);
}

void move_obstacle(sfobject *obstacle, sfRenderWindow *window)
{
	sfVector2f move;

	move.x = -1;
	sfRenderWindow_drawSprite(window, obstacle->sprite, NULL);
	sfSprite_move(obstacle->sprite, move);
}

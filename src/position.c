/*
** EPITECH PROJECT, 2018
** runner
** File description:
** position
*/

#include "../include/my.h"

void position_background(background_t *bg)
{
	position pos;

	pos.position.x = 0;
	pos.position.y = 0;
	sfSprite_setPosition(bg->bg1->sprite, pos.position);
	sfSprite_setPosition(bg->bg3->sprite, pos.position);
	sfSprite_setPosition(bg->bg4->sprite, pos.position);
	sfSprite_setPosition(bg->bg5->sprite, pos.position);
	sfSprite_setPosition(bg->bg6->sprite, pos.position);
	sfSprite_setPosition(bg->bg7->sprite, pos.position);
}

void position_obstacle(background_t *bg)
{
	position pos;

	pos.position.x = 1800;
	pos.position.y = 760;
	sfSprite_setPosition(bg->obstacle->sprite, pos.position);
}

void position_goblin(background_t *bg)
{
	position pos;

	pos.position.x = 200;
	pos.position.y = 760;
	sfSprite_setPosition(bg->goblin->sprite, pos.position);
}

void scale_position(background_t *bg, sfRenderWindow *window)
{
/*	sfVector2f scale;

	scale.x = 5;
	scale.y = 5;*/
//	sfSprite_setScale(bg->goblin->sprite, scale);
	sfRenderWindow_drawSprite(window, bg->goblin->sprite, NULL);
}

void move_all_background(background_t *bg, sfRenderWindow *window)
{
	move_bg1(bg->bg1, window);
	move_bg3(bg->bg3, window);
	move_bg4(bg->bg4, window);
	move_bg5(bg->bg5, window);
	move_bg6(bg->bg6, window);
	move_bg7(bg->bg7, window);
	move_obstacle(bg->obstacle, window);
}

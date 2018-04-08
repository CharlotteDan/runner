/*
** EPITECH PROJECT, 2018
** window
** File description:
** runner
*/

#include "../include/my.h"

void create_background(background_t *bg)
{
	bg->bg1 = create_sprite("src/sprite/moon.jpg");
	bg->bg3 = create_sprite("src/sprite/treemiddle.png");
	bg->bg4 = create_sprite("src/sprite/treefront.png");
	bg->bg5 = create_sprite("src/sprite/treeback.png");
	bg->bg6 = create_sprite("src/sprite/grass.png");
	bg->bg7 = create_sprite("src/sprite/road.png");
	bg->goblin = create_sprite("src/sprite/goblin_move.png");
	bg->obstacle = create_sprite("src/sprite/obstacle.png");
}

void destroy_all(background_t *bg, sfRenderWindow *window)
{
	sfRenderWindow_destroy(window);
	sfSprite_destroy(bg->bg1->sprite);
	sfSprite_destroy(bg->bg3->sprite);
	sfSprite_destroy(bg->bg4->sprite);
	sfSprite_destroy(bg->bg5->sprite);
	sfSprite_destroy(bg->bg6->sprite);
	sfSprite_destroy(bg->bg7->sprite);
	sfSprite_destroy(bg->goblin->sprite);
	sfSprite_destroy(bg->obstacle->sprite);
	sfTexture_destroy(bg->bg1->texture);
	sfTexture_destroy(bg->bg3->texture);
	sfTexture_destroy(bg->bg4->texture);
	sfTexture_destroy(bg->bg5->texture);
	sfTexture_destroy(bg->bg6->texture);
	sfTexture_destroy(bg->bg7->texture);
	sfTexture_destroy(bg->goblin->texture);
	sfTexture_destroy(bg->obstacle->texture);
}

int jump(clocking_t *clock, int jp)
{
	clock->time = sfClock_getElapsedTime(clock->clock);
	clock->second = (clock->time.microseconds);
	if ((clock->second) >= (2000)) {
		jp = jp + 1;
		sfClock_restart(clock->clock);
	}
	return (jp);
}

int event_window(sfRenderWindow *window, sfEvent event, background_t *bg,
		 clocking_t *clock)
{
	sfVector2f pos2;
	sfVector2f jump1;
	int jp = 0;

	pos2.x = 200;
	pos2.y = 760;
	jump1.x = 200;
	jump1.y = 600;
	if (event.type == sfEvtClosed)
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue && bg->jump == 0) {
		sfSprite_setPosition(bg->goblin->sprite, jump1);
		bg->jump = 1;
	}
	if (bg->jump == 1 && jump(clock, jp) == sfTrue) {
		sfSprite_setPosition(bg->goblin->sprite, pos2);
		bg->jump = 0;
	}
	return (0);
}

char *fs_open_file(char **av)
{
	int fd = 0;
	int size;
	char buf[300];
	char *str;

	fd = open(av[1], O_RDONLY);
	if (fd == -1) {
		return (NULL);
	}
	size = read(fd, buf, 300);
	buf[size] = '\0';
	str = buf;
	close(fd);
	return (str);
}

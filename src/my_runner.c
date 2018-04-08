/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** graphical
*/

#include "../include/my.h"

sfRenderWindow *createMyWindow()
{
	sfRenderWindow *window;
	sfVideoMode mode = {1920, 1080, 32};

	window = sfRenderWindow_create(mode, "my_runner",
				       sfDefaultStyle, NULL);
	return (window);
}

sfobject *create_sprite(const char *draw_bg)
{
	sfobject *sp = malloc(sizeof(*sp));

	sp->texture = sfTexture_createFromFile(draw_bg, NULL);
	sp->sprite = sfSprite_create();
	sfSprite_setTexture(sp->sprite, sp->texture, sfTrue);
	return (sp);
}

void end_window(sfRenderWindow *window)
{
	sfRenderWindow_display(window);
	sfRenderWindow_clear(window, sfBlack);
}

int runner()
{
	sfRenderWindow *window;
	sfEvent event;
	background_t bg;
//	sfMusic *music;
	int x;
	sfIntRect rect = {0, 0, 24, 31};
	text_t texts;
	const char *string = "score :\n";
	clocking_t clock;
	int score = 0;
	position p;
	position p2;
	
	p.position.x = 0;
	p.position.y = 0;
	p2.position.x = 150;
	p2.position.y = 0;
	bg.jump = 0;
	bg.clock = sfClock_create();
	texts.text = sfText_create();
	texts.font = sfFont_createFromFile("src/runnerfont.ttf");
	sfText_setFont(texts.text, texts.font);
	window = createMyWindow(1920, 1080);
//	music = sfMusic_createFromFile("src/music/kokia.ogg");
//	sfMusic_play(music);
	display_sprite(&bg);
	while (sfRenderWindow_isOpen(window)) {
		score = score2(&clock, score);
		if (sfSprite_getPosition(bg.obstacle->sprite).x < -10) {
			position_obstacle(&bg);
		}
		if (x == 2500) {
			x = 0;
			position_background(&bg);
		}
		x++;
		while (sfRenderWindow_pollEvent(window, &event)) {
			event_window(window, event, &bg, &bg.clock);
		}
		if (sfSprite_getPosition(bg.obstacle->sprite).x ==
		    sfSprite_getPosition(bg.goblin->sprite).x && bg.jump != 1) {
			my_putstr("you loose <3\n");
			sfRenderWindow_close(window);
		}
		if (score == 500) {
			my_putstr("you win\n");
		}
		move_all_background(&bg, window);
		move_sprite(&bg.clock, &rect);
		sfSprite_setTextureRect(bg.goblin->sprite, rect);
		scale_position(&bg, window);
		sfText_setString(texts.text, string);
		sfText_setPosition(texts.text, p.position);
		sfRenderWindow_drawText(window, texts.text, NULL);
		sfText_setString(texts.text, my_itoa(score));
		sfText_setPosition(texts.text, p2.position);
		sfRenderWindow_drawText(window, texts.text, NULL);
		end_window(window);
	}
//	sfMusic_destroy(music);
	destroy_all(&bg, window);
	return (0);
}

int main(int ac, char **av, char **envp)
{
	if (envp[0] == NULL) {
		return (84);
	}
	if (ac == 2)
		fs_open_file(av);
	runner();
	if (ac != 3)
		return (84);
	return (0);
}

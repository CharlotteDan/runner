/*
** EPITECH PROJECT, 2017
** my
** File description:
** runner
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <SFML/System/Export.h>

struct position {
	sfVector2f position;
};
typedef struct position position;

typedef struct s_background {
	sfTexture *texture;
	sfSprite *sprite;
} sfobject;

struct size_sprite {
	int minimum;
	int maximum;
};
typedef struct size_sprite size_sprite;

typedef struct {
	sfClock *clock;
	sfTime time;
	float second;
	sfIntRect rectangle;
} clocking_t;

typedef struct {
	sfobject *bg1;
	sfobject *bg3;
	sfobject *bg4;
	sfobject *bg5;
	sfobject *bg6;
	sfobject *bg7;
	sfobject *goblin;
	sfobject *obstacle;
	sfClock *clock;
	sfTime time;
	float seconds;
	int jump;
} background_t;

typedef struct {
	sfFont *font;
	sfText *text;
} text_t;

void position_goblin(background_t *gob);
void move_sprite(clocking_t *clock, sfIntRect *rectangle);
void move_bg1(sfobject *bg1, sfRenderWindow *window);
void move_bg2(sfobject *bg2, sfRenderWindow *window);
void move_bg3(sfobject *bg3, sfRenderWindow *window);
void move_bg4(sfobject *bg4, sfRenderWindow *window);
void move_bg5(sfobject *bg5, sfRenderWindow *window);
void move_bg6(sfobject *bg6, sfRenderWindow *window);
void move_bg7(sfobject *bg7, sfRenderWindow *window);
void create_background(background_t *bg);
void destroy_all(background_t *bg, sfRenderWindow *window);
void position_background(background_t *bg);
void move_all_background(background_t *bg, sfRenderWindow *window);
void scale_position(background_t *bg, sfRenderWindow *window);
void texture_sprite(background_t *bg);
void move_obstacle(sfobject *obstacle, sfRenderWindow *window);
void position_obstacle(background_t *bg);
void my_putstr(char const *str);
void display_sprite(background_t *bg);
void display_sprite(background_t *bg);
void sprite_pos(sfRenderWindow *window, background_t *bg);
int jump(clocking_t *clock, int jp);
int runner();
int event_window(sfRenderWindow *window, sfEvent event, background_t *bg,
		 clocking_t *clock);
int charinf (char c);
int count_word (char const *str);
int my_strlen(char const *str);
int score2(clocking_t *clock, int score);
int help(int ac, char **av);

char *my_itoa(int nb);
char **my_str_to_word_array (char const *str);
char *fs_open_file(char **av);
char *my_strdup (char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);

sfRenderWindow *createMyWindow();
sfobject *create_sprite(const char *draw_bg);

#endif

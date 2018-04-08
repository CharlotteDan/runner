/*
** EPITECH PROJECT, 2018
** text pos
** File description:
** runner
*/

void text_p(sfRenderWindow *window, position p)
{
	p.position.x = 150;
	p.position.y = 0;

	sfText_setString(texts.text, string);
	sfText_setPosition(texts.text, p.position);
	sfRenderWindow_drawText(window, texts.text, NULL);
}

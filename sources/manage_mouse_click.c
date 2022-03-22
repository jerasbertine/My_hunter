/*
** EPITECH PROJECT, 2021
** manage_mouse_click.c
** File description:
** manage mouse click
*/

#include "my_hunter.h"

void manage_mouse_click(struct all *a)
{
    if (a->g->event.mouseButton.x >= a->s->pos.x &&
        a->g->event.mouseButton.x <= a->s->pos.x + 225 &&
        a->g->event.mouseButton.y >= a->s->pos.y + 75 &&
        a->g->event.mouseButton.y <= a->s->pos.y + 200) {
        a->s->pos.x = -250;
        a->s->pos.y = rand() % 650;
        a->s->offset += 2;
    }
}

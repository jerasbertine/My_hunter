/*
** EPITECH PROJECT, 2021
** analyse_events.c
** File description:
** analyse events
*/

#include "my_hunter.h"

void analyse_events(struct all *a)
{
    sfRenderWindow_setFramerateLimit(a->g->wdw, 120);
    if (a->g->event.type == sfEvtClosed) {
        sfMusic_destroy(a->g->music);
        window_close(a->g->wdw, a->g->event);
    }
    if (a->g->event.type == sfEvtMouseButtonPressed)
        manage_mouse_click(a);
}

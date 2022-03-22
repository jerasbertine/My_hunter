/*
** EPITECH PROJECT, 2021
** window_open.c
** File description:
** window open
*/

#include "my_hunter.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left == max_value)
        rect->left = 0;
    else
        rect->left += offset;
}

void akimbo(struct all *a)
{
    sfRenderWindow_display(a->g->wdw);
    sfSprite_setTextureRect(a->s->sprite, a->g->rect);
    sfSprite_setTextureRect(a->s->heart, a->g->rect_life);
    a->k->time = sfClock_getElapsedTime(a->k->clock);
    a->k->seconds = a->k->time.microseconds / 100000.0;
    sfSprite_setPosition(a->s->sprite, a->s->pos);
    sfRenderWindow_drawSprite(a->g->wdw, a->s->back, NULL);
    sfRenderWindow_drawSprite(a->g->wdw, a->s->sprite, NULL);
    sfRenderWindow_drawSprite(a->g->wdw, a->s->heart, NULL);
    if (a->k->seconds > 0.3) {
        move_rect(&a->g->rect, 110, 880);
        spritepos(a);
        sfClock_restart(a->k->clock);
    }
}

void init_all(struct all *a)
{
    int_rect(a);
    rect_life(a);
    sprite_create(a);
    set_texture(a);
    pos_sprite(a);
    a->s->offset = 5;
    a->s->life = 3;
}

void window_open(struct all *a)
{
    sfVideoMode video_mode = {1920, 1080, 64};
    a->k->clock = sfClock_create();
    init_all(a);

    a->g->wdw = sfRenderWindow_create(video_mode, "", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(a->g->wdw)) {
        akimbo(a);
        if (a->s->life == 0) {
            sfMusic_destroy(a->g->music);
            sfRenderWindow_close(a->g->wdw);
        }
        while (sfRenderWindow_pollEvent(a->g->wdw, &a->g->event)) {
            analyse_events(a);
        }
    }
}

/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-jeras.bertine
** File description:
** sprite
*/

#include "my_hunter.h"

void spritepos(struct all *a)
{
    a->s->pos = sfSprite_getPosition(a->s->sprite);
    if (a->s->pos.x > 1920) {
        a->s->pos.x = -200;
        a->s->pos.y = rand() % 650;
        a->s->life -= 1;
        a->g->rect_life.width -= 575;
    } else {
        a->s->pos.x += a->s->offset;
    }
}

void sprite_create(struct all *a)
{
    a->s->sprite = sfSprite_create();
    a->s->t_sprite = sfTexture_createFromFile("assets/dragonlich.png", NULL);
    a->s->back = sfSprite_create();
    a->s->t_back = sfTexture_createFromFile("assets/jeras.jpg", NULL);
    a->s->heart = sfSprite_create();
    a->s->t_heart = sfTexture_createFromFile("assets/life.png", NULL);
}

void set_texture(struct all *a)
{
    sfSprite_setTexture(a->s->sprite, a->s->t_sprite, sfFalse);
    sfSprite_setTexture(a->s->back, a->s->t_back, sfFalse);
    sfSprite_setTexture(a->s->heart, a->s->t_heart, sfFalse);
}

void pos_sprite(struct all *a)
{
    a->s->pos.x = -200;
    a->s->pos_life.x = 0;
    a->s->pos_life.y = 0;
    sfSprite_setPosition(a->s->sprite, a->s->pos);
    sfSprite_setScale(a->s->sprite, (sfVector2f) {2.5, 2.5});
    sfSprite_setPosition(a->s->heart, a->s->pos_life);
    sfSprite_setScale(a->s->heart, (sfVector2f) {0.2, 0.2});
}

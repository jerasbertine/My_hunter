/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-jeras.bertine
** File description:
** rect
*/

#include "my_hunter.h"

void int_rect(struct all *a)
{
    a->g->rect.top = 0;
    a->g->rect.left = 0;
    a->g->rect.width = 110;
    a->g->rect.height = 110;
}

void rect_life(struct all *a)
{
    a->g->rect_life.top = 0;
    a->g->rect_life.left = 0;
    a->g->rect_life.width = 1725;
    a->g->rect_life.height = 545;
}

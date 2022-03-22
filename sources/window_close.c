/*
** EPITECH PROJECT, 2021
** window_close.c
** File description:
** window close
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <SFML/Window/Mouse.h>
#include "../includes/my_hunter.h"

void window_close(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

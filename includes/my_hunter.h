/*
** EPITECH PROJECT, 2021
** my_hunter.h
** File description:
** h files for my_hunter
*/

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_

    #include <SFML/Config.h>
    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Types.h>
    #include <SFML/Audio/Export.h>
    #include <SFML/Audio/SoundStatus.h>
    #include <SFML/Audio/Types.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>

typedef struct game{
    sfRenderWindow *wdw;
    sfEvent event;
    sfMusic *music;
    sfIntRect rect;
    sfIntRect rect_life;
}game;

typedef struct sprite{
    sfSprite *sprite;
    sfTexture *t_sprite;
    sfSprite *back;
    sfTexture *t_back;
    sfSprite *heart;
    sfTexture *t_heart;
    sfVector2f pos;
    sfVector2f pos_life;
    int offset;
    int life;
    int score;
}sprite;

typedef struct clock {
    sfClock *clock;
    sfTime time;
    float seconds;
}clock;

typedef struct all{
    sprite *s;
    game *g;
    clock *k;
}all;

int error_handling(int ac, char **av, struct all *a);
void spritepos(struct all *a);
void sprite_create(struct all *a);
void set_texture(struct all *a);
void pos_sprite(struct all *a);
void int_rect(struct all *a);
void my_putchar(char c);
int my_putstr(char const *str);
void window_open(struct all *a);
void manage_mouse_click(struct all *a);
void analyse_events(struct all *a);
void window_close(sfRenderWindow *window, sfEvent event);
void rect_life(struct all *a);

#endif /* !MY_HUNTER_H_ */

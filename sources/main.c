/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-jeras.bertine
** File description:
** main
*/

#include "my_hunter.h"

int main(int ac, char **av)
{
    struct all *a = malloc(sizeof(struct all));
    a->s = malloc(sizeof(struct sprite));
    a->g = malloc(sizeof(struct game));
    a->k = malloc(sizeof(struct clock));
    if (error_handling(ac, av, a) == 84)
        return (84);
    free(a);
}

void music(struct all *a)
{
    a->g->music = sfMusic_createFromFile("assets/music.ogg");
    sfMusic_setLoop(a->g->music, true);
    sfMusic_play(a->g->music);
}

 void usage(void)
{
    my_putstr("\t\tMY HUNTER\n\n");
    my_putstr("Goal of the game:\n");
    my_putstr("\tYou must shoot the birds as they move.\n");
    my_putstr("\tIf you miss your shot, you lose a life.\n");
    my_putstr("\tIn total you have 3 lives, that means that\n");
    my_putstr("\twhen you have no more life the game is over.\n");
}

int error_handling(int ac, char **av, struct all *a)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            usage();
            return (0);
        }
        return (84);
    }
    if (ac == 1) {
        music(a);
        window_open(a);
    }
    return (0);
}

/*
** Boumerxp PROJECT, 2021
** LearnC
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>

int check_min_num(int a, int b)
{
    if (a <= b)
        return a;
    return b;
}

int main (int ac, char **av)
{
    int a = atoi(av[1]), b = atoi(av[2]);

    printf("Mon plus petit nombre est le %d \n", check_min_num(a, b));
    return 0;
}
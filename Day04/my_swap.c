/*
** Tryhard PROJECT, 2021
** LearnC
** File description:
** my_swap
*/

void my_swap (int *a , int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}
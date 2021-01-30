/*
** Tryhard PROJECT, 2021
** LearnC
** File description:
** my_print_digits
*/

#include <unistd.h>

int my_print_digits (void)
{
    write(1,"0123456789", 11);
    return 0;
}
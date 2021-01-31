/*
** Tryhard PROJECT, 2021
** LearnC
** File description:
** my_print_comb2
*/

#include <unistd.h>

int printChar4(int a, int b, int c, int d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
    if (a != '9' || b != '9' || c != '9' || d != '9')
        write(1, ", ", 3);
}

int my_print_comb2 (void)
{
    char a = '0', b = '0', c = '0', d = '0';
    while (a <= '9')
    {
        printChar4(a, b, c, d);
        d++;
        if (d > '9')
        {
            d = '0';
            c++;
        }
        if (c > '9')
        {
            c = '0';
            b++;
        }
        if (b > '9')
        {
            b = '0';
            a++;
        }
    }   
}
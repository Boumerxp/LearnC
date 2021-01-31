/*
** Tryhard PROJECT, 2021
** LearnC
** File description:
** my_print_comb
*/

#include <unistd.h>

void print(char a, char b ,char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7')
        write(1, ", ", 2);
}

int my_print_comb (void)
{
    char a = '0', b = '0', c = '0';

    while (a <= '7') {
        a < b && b < c ? print(a, b, c) : 0; //ternaire
        c++;
        c > '9' ? b++, c = '0' : 0;
        b > '9' ? a++, b = '0' : 0;
    }  
}
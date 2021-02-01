/*
** Tryhard PROJECT, 2021
** LearnC
** File description:
** my_put_nbr
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    if (nb <= 0)
    {
        nb = nb * -1;
        write(1,"-",1);
    }
    char value = nb % 10 + '0';
    if (nb > 9)
    {
         nb = nb / 10;
         my_put_nbr(nb);
    }
    write(1, &value ,1);
}
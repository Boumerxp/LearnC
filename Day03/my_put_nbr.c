/*
** Tryhard PROJECT, 2021
** LearnC
** File description:
** my_put_nbr
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    if (nb <= 9)
    {
        char value = nb + '0';
        write(1, &value, 1);
    }
    else if (nb > 9 && nb < 100){
        char value = nb / 10 + '0'; // 15 / 10 = 1.5
        char value2 = nb % 10 + '0'; // modulo de nb
        write(1, &value, 1);
        write(1, &value2, 1);
    }
    else
    {
        if (nb > 0)
        {
            char value = nb % 10 + '0';
            char value2 = value;
            value = value / 10 + '0';
            my_put_nbr(value2);
        }
    }
}

int main(int a)
{
    my_put_nbr(155);
    return 0;
}

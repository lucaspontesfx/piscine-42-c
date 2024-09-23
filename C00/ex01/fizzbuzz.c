/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints a sequence of numbers from 1 to 100 on the standard output, each separated by a newline.

If the number is a multiple of 3, the program should print 'fizz' instead.

If the number is a multiple of 5, the program should print 'buzz' instead.

If the number is a multiple of both 3 and 5, the program should print 'fizzbuzz' instead.

Example:

*/

#include <unistd.h>

void    ft_putnbr(int number)//Function to beused during the loop
{
    if (number > 9)
    ft_putnbr(number / 10);
    write (1, &"0123456789"[number % 10], 1);
}

int main(void)
{
    int number;

    number = 1;
    while (number <= 100)
    {
        if (number % 3 == 0 && number % 5 == 0)// verify if the number is mult
            write (1,"fizzbuzz", 9);

        else if (number % 3 == 0)
            write (1, "fizz", 5);
        else if (number % 5 == 0)
        write (1, "buzz", 5);
        else
        ft_putnbr(number);
        write (1, "\n", 1);
        number++;
    }
    return (0);
}


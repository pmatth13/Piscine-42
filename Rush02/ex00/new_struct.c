#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int ft_pow(int base, int exp)
{
    int result = 1;

    if (exp < 0)
        return 0; 

    while (exp > 0)
    {
        result *= base;
        exp--;
    }
    return result;
}

typedef struct dict
{
    long long	key;
    char	*value;
} t_dict;
t_dict pairs[33] = {{0, "zero"},
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"},
    {10, "ten"},
    {11, "eleven"},
    {12, "twelve"},
    {13, "thirteen"},
    {14, "fourteen"},
    {15, "fifteen"},
    {16, "sixteen"},
    {17, "seventeen"},
    {18, "eighteen"},
    {19, "nineteen"},
    {20, "twenty"},
    {30, "thirty"},
    {40, "forty"},
    {50, "fifty"},
    {60, "sixty"},
    {70, "seventy"},
    {80, "eighty"},
    {90, "ninety"},
    {100, "hundred"},
    {1000, "thousand"},
    {1000000, "million"},
    {1000000000, "billion"},
    {1000000000000, "trillion"},
    //{1000000000000000, "quadrillion"}
};

char    *ft_lookup(long long numb)
{
    int j;

    j = 0;
 //   if (numb > 100)
 //       return (NULL);
    while (pairs[j].key != numb && j < 33)
        j++;
    return (pairs[j].value);
}

void    ft_print(long long numb, int digits)
{
    char    *buf;
    long long     div;

    if (numb <= 20)
    {
        buf = ft_lookup(numb);
        printf("%s", buf);
        return ;
    }
    if (digits == 3)
        div = 100;
    else
        div = ft_pow(10, digits - (digits % 3));
    if (digits == 2)
    {
        div = 10;
        buf = ft_lookup((numb / div) * div);
        printf("%s", buf);
    }
    else if (numb / div)
    {
        if (numb / div > 20)
        {
            ft_print(numb / div, digits - (digits % 3));
            printf("-");
        }
        else
        {
            buf = ft_lookup(numb / div);
            printf("%s-", buf);
        }
        buf = ft_lookup(div);
        printf("%s", buf);
    }
    if (numb % div)
    {
        if(numb / div)
            printf("-");
        ft_print(numb % div, digits - 1);
    }
}

/*int	main(int argc, char **argv)
{
    long long numb;
    int digits;

    digits = strlen(argv[1]); //ideally should check only for numbers
    numb = atoi(argv[1]);
    ft_print(numb, digits);
}*/
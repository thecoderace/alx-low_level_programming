#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the input string
 *
 * Return: the integer value of the input string
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            if (result < 0 && sign == 1)
            {
                return 0;
            }
        }
        else if (result > 0)
        {
            break;
        }
        i++;
    }

    return result * sign;
}

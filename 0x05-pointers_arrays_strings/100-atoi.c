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
    int started = 0;
    int limit = INT_MAX / 10;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (result > limit)
            {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            result = result * 10 + (s[i] - '0');
        }
        else if (result > 0)
        {
            break;
        }
        i++;
    }

    return result * sign;
}

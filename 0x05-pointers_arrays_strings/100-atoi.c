#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if there are no numbers
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* handle leading whitespace */
    while (s[i] == ' ')
    {
        i++;
    }

    /* handle sign */
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* convert string to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* check for overflow */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

#include "main.h"
/**
 * _exponent - calculates the value of a number to
 * the power of n.
 * @base: base number.
 * @n: exponential value.
 *
 * Return: the the number multiplied by itself n times.
 */

unsigned long int _exponent(unsigned int base, unsigned n)
{
        unsigned long int total = 1;
        size_t i = 0;

        while (i < n)
        {
                total = total * base;
                i++;
        }
        return (total);
}

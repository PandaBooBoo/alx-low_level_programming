#include "main.h"

/**
 *
 *swap_int - swaps the values of two intergers
 *@a: first int to swap
 *@b: second int to swap
 *@temp: helper variable
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

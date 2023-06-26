nclude "main.c"
/**
 *
 *swap_int - swaps the values of two intergers
 *@a: first int to swap
 *@b: second int to swap
 *@m: helper variable
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

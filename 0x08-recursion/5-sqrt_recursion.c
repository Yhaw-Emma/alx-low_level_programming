#include "main.h"

/** 
* square_root - find square root of n, starting from the smallest possible, 0
* @n: n
* @root: test this root
* Return: natural square root, or -1 if not natural root
*/

int square_root (int n, int root )
{
	if ( root * root > n )
		return (-1);

	if ( root * root == n)
		return (root);

	return (square_root(n, root + 1));

}


/**
* _sqrt_recursion - find natural square root of n
* @n: n
* Return: natural square root, or -1 if not natural root
*/


int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (square_root(n, 0));
}

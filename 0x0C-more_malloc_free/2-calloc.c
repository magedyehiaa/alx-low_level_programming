#include "main.h"
/**
 * _calloc - locate memo Me gO oO
 * @nmemb: number
 * @size: byte
 *
 * Return:pointer array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
if (!nmemb || !size)
return (NULL);
m = malloc(nmemb * size);
if (!m)
return (NULL);
nmemb *= size;
while (nmemb--)
m[nmemb] = 0;
return (m);
}

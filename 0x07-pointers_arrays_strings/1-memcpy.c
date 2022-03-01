#include "main.h"

/**
 * _memcpy - copiar espacios de memoria
 * @dest: Destino de la copia
 * @src: fuente de la copia
 * @n: bytes donde se pega
 * Return: d
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int pos;

for (pos = 0; pos < n; pos++)
{
dest[pos] = src[pos];
}
return (dest);
}

#include <stdio.h>
/**
 *main-prints all multiples of 3 and 5 up to 1024
 *Return:0 if there is no error
 */
int main(void)
{
unsigned long int tres = 0;
unsigned long int cinco = 0;
unsigned long int numero = 0;
int contador = 0;

while (contador < 1024)
{
if ((contador % 3) == 0)
{
tres = tres + contador;
}
else if ((contador % 5)  == 0)
{
cinco = cinco + contador;
}
contador++;
}
numero = tres + cinco;
printf("%ld\n", numero);
return (0);
}

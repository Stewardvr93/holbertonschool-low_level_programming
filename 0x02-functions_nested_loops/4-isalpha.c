#include "main.h"
/**
 *_isalpha-alphabetic character is checked
 *@c: is the required character.
 *Return:0 if there is no error
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

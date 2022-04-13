include "main.h"
#include "main.h"
#include "ctype.h"

/**
* _islower - check for lower case letter
* @c : character to check the case
* Return:0 or 1
*/

int _islower(int c)
{

if (islower(c))
{
return(1);
_putchar('/n');
}
else
{
return(0);
_putchar('/n');
}
}
#include "main.h"

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _islower(int c)
{
    return (c >= 97 && c <= 122);

}

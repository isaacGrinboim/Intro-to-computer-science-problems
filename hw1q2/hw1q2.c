/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>



/*=========================================================================
  Constants and definitions:
==========================================================================*/

/* put your #defines and typedefs here*/



/*-------------------------------------------------------------------------
  The main program. (describe what your program does here)
 -------------------------------------------------------------------------*/
int main()
{
    int counter = 0;
    char scan = 0 , chartocheck = 0;
    printf("Enter letter to count:\n");
    scanf("%c", &chartocheck);
    if (!((chartocheck>='a' && chartocheck<='z' ) ||(   chartocheck >= 'A' && chartocheck <= 'Z')))
    {
    return 0;
    }

    printf("Enter the char sequence:\n");

    while(scan!='#')
    {
       scanf("%c",&scan);
       if ((scan >='a' && scan<='z' )||(scan >= 'A' && scan <= 'Z'))
        {
       if (scan == chartocheck || scan == chartocheck+32 || scan == chartocheck-32)
        counter++;
        }
    }
    printf("The letter appeared %d times",counter);




  return 0;
}

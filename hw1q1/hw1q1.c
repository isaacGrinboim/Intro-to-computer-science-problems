/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 0.000001// number we regard as ZERO


/*=========================================================================
  Constants and definitions:
==========================================================================*/

/* put your #defines and typedefs here*/



/*-------------------------------------------------------------------------
  The main program. (describe what your program does here)
 -------------------------------------------------------------------------*/
int main()
{
    double a=0,b=0,c=0;



    while (-EPS<a && a<EPS)
    {
        printf("Enter the coefficients of a polynomial:\n");
        if(scanf("%lf %lf %lf",&a,&b,&c)!=3)
        return 0;
    }





    double root_1 = (((0-1)*b)-sqrt(b*b-4*a*c))/(2*a); // calculation for root_1
    double root_2 = (((0-1)*b)+sqrt(b*b-4*a*c))/(2*a); // calculation for root_2


    if((b*b-4*a*c)<0)
       {
           printf("There are no roots\n");
       }
       else if((b*b-4*a*c)==0)
        {
            if(root_1==-0.000)root_1 = 0;
            printf("The root is %.3f\n",root_1);
        }
        else
        {
            printf("The roots are %.3lf, %.3lf", root_1,root_2);
        }


      return 0;
}

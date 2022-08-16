//Include a math and error
//------------------------
//
#include<stdio.h>
//#include<math.h>
#ifdef _MATH_H

#error Include Math Library

#else 
void main()
{
float a;
a=sqrt(7);
printf("%f",a);
}
#endif

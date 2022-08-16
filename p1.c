//write a programm to implement a preprocessor directives.
//--------------------------------------------------------
#include<stdio.h>
#define square(X) ((X)*(X))
#define square(X) (X*X)
int main()
{
printf("%d\n",square((3)+1));
}

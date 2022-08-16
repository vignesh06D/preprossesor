//  WAP to Implement a macros in Multiple lines
//  -------------------------------------------

#include<stdio.h>
#define print(i,limit) while(i<limit)\
{\
printf("%d -->Quiz\n",i);\
i++;\
}
int main()
{
int i=0;
print(i,3);
return 0;


}


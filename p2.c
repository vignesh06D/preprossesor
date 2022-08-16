//WAP to implement a pre-processor 
//---------------------------------
#include<stdio.h>
#define value 5
#define HELLO "HELLO"
int main()
{
{
printf("%s\n",HELLO);
#define HELLO 123.4567
printf("%e\n",HELLO);
printf("%d\n",value);
}
{
printf("%e\n",HELLO);//we using %s is goes to segmentation fault in this macros bcz, macros is repleaced.//
}
}


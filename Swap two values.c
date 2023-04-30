#include<stdio.h>
int swap(int a, int b)
{
    b=a+b;
    a=b-a;
    b=b-a;
    printf(" After swap: x=%d , y= %d",a,b);
    //return a,b;
}

int main()
{
    int x=10, y=20;
   // int s=swap(x,y);
    printf("Before swap: x= %d, y= %d\n",x,y);
    swap(x,y);
    return 0;
}

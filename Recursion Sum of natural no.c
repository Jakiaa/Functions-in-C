
#include<stdio.h>

int rec_sum(int n)
{
    if (n!=0)
        return n+rec_sum(n-1);
    else
    return n;

}

int main()
{
    int a=10;
    int y= rec_sum(a);
    printf("%d",y);

    return 0;
}



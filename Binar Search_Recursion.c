#include<stdio.h>
int BS(int x,int ar[], int low, int high)
{
    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(ar[mid]==x)
            return mid;
        else if (ar[mid]<x)
            return BS(x,ar,mid+1,high);
        else
            return BS(x,ar,low,mid-1);
    }
    return -1;

}
int main()
{
    int arr[]={2,4,5,6,7,8,9};
    int x=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=BS(x,arr,0,n-1);
    if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}

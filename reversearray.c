#include <stdio.h>

int main()
{
    int arr[]={5,6,3,2,8},i,size,temp;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

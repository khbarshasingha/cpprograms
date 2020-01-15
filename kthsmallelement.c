#include <stdio.h>

int main()
{
    int arr[]={6,5,3,8,5,0,3}, k , br[100]={0}, i, size_t,count=0;
    size_t=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size_t;i++)
    {
     br[arr[i]]+=1;
    }
    for(i=0;i<100;i++)
    {
     if(br[i]>0)
     {
       
         count+=1;
        
         if(count==3)
         {
             printf("%d",i);
             break;
         }
     }
    }
    
    return 0;
}

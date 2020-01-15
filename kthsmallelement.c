#include<stdio.h>
int main()
{
    int arr[]={7,10,4,3,20,15}, k , br[100]={0}, i, size_t,count=0;
    scanf("%d",&k);
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
        
         if(count==k)
         {
             printf("%d",i);
             break;
         }
     }
    }
    
    return 0;
}

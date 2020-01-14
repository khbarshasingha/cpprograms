#include <stdio.h>
#include<string.h>

int main()
{
    char name[]="barsha singha";
    int i=0;
    name[0]=name[0]-32;
    while(!isspace(name[i]))
    {
        i++;
    }
    name[i+1]=name[i+1]-32;
    printf("%s",name);
    return 0;
}

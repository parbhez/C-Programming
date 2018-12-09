#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100
int main()
{
    int num[MAX_SIZE],size,i,mod,reverse=0,n
    ,old;
    printf("Enter the input :");
    scanf("%d",&size);
    printf("Enter %d elements in array :",size);
    for(i=0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }
    old = num[i];
    while(size != 0)
    {
        mod = num[i] %10;
        reverse = reverse * 10 + mod;
        n = num[i]/10;
    }
    printf("Reverse :%d",reverse);
    return 0;
}

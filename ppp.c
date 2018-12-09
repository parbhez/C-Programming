#include<stdio.h>
int main()
{
    int i,array[5],old,num,reverse=0,mod;
    printf("Enter the input :");
    scanf("%d",&num);
    for(i=0; i < num; i++)
    {
        scanf("%d",&array[i]);
    }
    old = array[i];
    while(num!= 0)
    {
        mod = array[i]%10;
        reverse = reverse*10 + mod;
        num = array[i]/10;
    }
    if(array[i] == reverse){
         printf("This is a palimdram number");
    } else {
        printf("Not palimdram");
    }

}


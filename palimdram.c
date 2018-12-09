#include<stdio.h>
int main()
{
    int i,num,old,reverse=0,mod;
    printf("Enter the input :");
    scanf("%d",&num);
    old = num;
    while(num!= 0)
    {
        mod = num%10;
        reverse = reverse*10 + mod;
        num = num/10;
    }
    if(old == reverse){
         printf("This is a palimdram number");
    } else {
        printf("Not palimdram");
    }

}

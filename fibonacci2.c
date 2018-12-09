#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,first=0,second=1,fibo,num,i;
    printf("Enter the input : ");
    scanf("%d", &num);
    for(i=0; i < num; i++)
    {
         printf("%d ",first);
        fibo = first + second;
        first = second;
        second = fibo;

    }
}

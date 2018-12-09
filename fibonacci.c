#include<stdio.h>
#include<math.h>
int main()
{
    int num,fibo,count=0,first=0,second=1;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Fibonacci series : ",fibo);
    while(count < num)
    {
        if(count <=1){
             fibo = count;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf(" %d ",fibo);
          count++;
    }
    return 0;
}

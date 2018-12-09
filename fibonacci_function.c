#include<stdio.h>
#include<math.h>
void find_fibbo(num);
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    find_fibbo(num);

}

void find_fibbo(int n)
{
    int count=0,first=0, second=1,fibo;
    printf("Fibonacci series : ");
    while(count < n)
    {
        if(count <= 1)
        {
            fibo = count;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d, ", fibo);
        count++;
    }
}


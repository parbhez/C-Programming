#include<stdio.h>
#include<math.h>
void is_prime(int);
void even_odd(int);
int main()
{
    int num;
    printf("Enter the input number :");
    scanf("%d",&num);
    is_prime(num);
    even_odd(num);
}

void is_prime(int n){
    int i,count=0;
    for(i=2; i <n; i++){
        if(n%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("It is prime\n");
    }else {
        printf("Not prime\n");
    }
}

void even_odd(int n){
    if(n%2 == 0){
        printf("Even number\n");
    }else {
        printf("Odd number\n");
    }
}

#include<stdio.h>
#include<math.h>
void find_fibo(int);
int main(){
    int num;
    printf("Enter the input :");
    scanf("%d",&num);
    find_fibo(num);
}

void find_fibo(int n){
    int count = 0,fibo,first=0,second=1;
    printf("Fibonacci series : ");
    while(count < n){
        if(count <= 1){
            fibo = count;
        }else {
            fibo = first+second;
            first = second;
            second = fibo;
        }
        printf("%d, ",fibo);
        count++;
    }
}

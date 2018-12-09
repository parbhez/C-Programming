#include<stdio.h>
#include<math.h>
void find_factor(int);
int main(){
    int num,factor;
    printf("Enter the input :");
    scanf("%d",&num);
    find_factor(num);
}
void  find_factor(int n){
    int i,count=1;
    for(i = 1; i <= n; i++){
    count = count * i;
    }
    printf("Factorial :%d",count);
}



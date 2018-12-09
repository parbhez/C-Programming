#include<stdio.h>
#include<math.h>
void find_factor(int);
int main()

{
    int num;
    printf("Enter the Input :");
    scanf("%d",&num);
    find_factor(num);
}

void find_factor(int n){
    int i,count=0;
    for(i=1; i <=n; i++){
        if(n%i == 0){
            count++;
        }
    }
    printf("Factor:%d",count);
}

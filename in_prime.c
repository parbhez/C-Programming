#include <stdio.h>
#include<math.h>
#define MAX_SIZE 100
int main()
{
    int num[MAX_SIZE],i,size,count=0;
    printf("Enter the input size : ");
    scanf("%d",&size);
    printf("Enter %d elements in array : ",size);
    for(i = 0; i <size;i++){
            scanf("%d",&num[i]);
    }
    for(i = 0; i < size; i++){
        if(num[i]%2 != 0)
            count++;
    }
    printf("Prime :%d\n",count);
}

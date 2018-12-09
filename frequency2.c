#include<stdio.h>
void main()
{
    int num[5],test,fre=0,i;
    scanf("%d",&test);

    for(i=0; i <5; i++){
        scanf("%d",&num[i]);
    }

    for(i=0; i<5; i++){
        if(num[i] == test){
             fre++;
        }
    }
    printf("Frequency:%d",fre);
    return 0;
}

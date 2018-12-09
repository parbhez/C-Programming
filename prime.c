#include<stdio.h>
void main()
{
    int num[10],i,temp=0,j,count=0;
    for(i=0; i <10; i++){
        scanf("%d",&num[i]);
    }
    for(i=0; i <10; i++){
        for(j=2; j <num[i]/2; j++){
            if(num[i]%j==0){
                temp=1;
                break;
            }
            }
             if(temp==0){
                count++;
                temp=0;
        }
    }
 printf("prime:%d",count);
}

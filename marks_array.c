#include<stdio.h>
void main()
{
    int num[5],fail=0,letter=0,sum=0,i,average,max=-1,min;
    for(i=0;i < 5; i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i < 5; i++){
         if(num[i] < 33){
            fail++;
         }else if(num[i] >= 80){
            letter++;
         }
         if(num[i] > max){
            max= num[i];
         }
         sum=sum+num[i];
    }
            average = sum/5;

   printf("Letter :%d\n",letter);
   printf("fail :%d\n",fail);
   printf("Max :%d\n",max);
   printf("sum :%d\n",sum);
   printf("Average :%d\n",average);

}

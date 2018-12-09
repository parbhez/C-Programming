#include <stdio.h>
int main()
{
    int num[5],i,count=0,j,temp=0;
    for(i=0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i < 5; i++)
    {

        for(j = 0; j <num[i]/2; j++)
        {
            if(num[i] % j == 0){
                temp=1;
                break;
            }
        }
        if(temp== 0)
        {
           count++;
           temp=0;
        }

    }
printf("prime =%d\n",count);

}


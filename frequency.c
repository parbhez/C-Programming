#include<stdio.h>
#include<math.h>
int main()
{
    int i,num[5],test,fre=0;
    printf("Enter the input :");
    scanf("%d",&test);
    printf("Enter %d element in array :",test);
    for(i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<5; i++)
    {
        if(num[i] == test)
        {
            fre++;
        }
    }
    printf("Frequency :%d",fre);
    return 0;
}

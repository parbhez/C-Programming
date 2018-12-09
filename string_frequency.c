#include<stdio.h>
#include<string.h>

void main()
{
    char str[20],ch;
    gets(str);
    scanf("%c",&ch);
    int i,count=0;
    for(i=0; str[i] !='\0';i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("Frequency :%d",count);

}

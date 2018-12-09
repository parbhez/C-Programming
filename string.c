#include<stdio.h>
#include<string.h>
void main()
{
    char name[20],str;
    scanf("%s",name);
    printf("Length of the string :%d\n",strlen(name));
    int i,count=0;
    for(i=0; name[i] !='\0'; i++){
        count++;
    }
    printf("Length: %d",count);
}

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    int i,length;
    length = strlen(str2);
    printf("Length :%d\n",length);
    for(i=0; str2[i] !='\0'; i++){
        str1[i] = str2[i];
    }
    puts(str1);

}

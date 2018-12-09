#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20], str2[20];
    int i,len;
    gets(str1);
    gets(str2);
    len = strlen(str2);
    for(i=0; str1[i] !='\0'; i++){
        str2[len] = str1[i];
        len++;
    }
    puts(str2);
}






#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20],str2[20];
    gets(str1);
    gets(str2);
    strcpy(str1,str2);
    puts(str1);
}

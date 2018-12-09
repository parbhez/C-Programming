
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], reverse[MAX_SIZE];
    int size, i, arrIndex, n,revIndex;


    printf("Enter size of the array: ");
    scanf("%d", &size);


    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
   n =  arr[i];
    revIndex = 0;
    arrIndex = size - 1;
    while(arrIndex >= 0)
    {

        reverse[revIndex] = arr[arrIndex];

        revIndex++;
        arrIndex--;
    }

    if(arrIndex== revIndex){
            printf("Palindrom");
        }else {
         printf("Not Palindrom");
        }

    return 0;
}

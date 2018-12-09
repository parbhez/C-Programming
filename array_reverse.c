#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        if(arr[i] == arr[i]){
            printf("palimdrom");
        }else {
            printf("Not palimdrom");
        }
    }
    return 0;
}

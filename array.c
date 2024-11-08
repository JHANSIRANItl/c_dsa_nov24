#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("printing the elements\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

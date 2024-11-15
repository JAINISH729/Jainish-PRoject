#include<stdio.h>

int main() 
{
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from the Array: ");
    int found_negative = 0; 
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) {
            if (found_negative) 
            {
                printf(", ");
            }
            printf("%d", arr[i]);
            found_negative = 1;
        }
    }
    if (!found_negative) 
    {
        printf("No negative elements found");
    }

    printf("\n");
    return 0;
}

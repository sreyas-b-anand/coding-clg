#include <stdio.h>
int item, size;
void readArray(int array[])
{
    int i;
    printf("\nEnter the size of array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
}
void binarySearch(int array[])
{
    int left = 0, right = size - 1;
    int mid;
    while (left <= right)
    {
        mid = (right + left) / 2;
        if (array[mid] == item)
        {
            printf("\nElement found at position %d\n", mid + 1);
            return;
        }
        else if (array[mid] > item)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
}
void main()
{
    int array[10];
    readArray(array);
    binarySearch(array);
}
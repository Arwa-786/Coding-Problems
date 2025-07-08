#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, j, temp, item;
    for (i = 1; i < n; i++)
    {
        item = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > item)
                arr[j + 1] = arr[j]; // shift the item
            else
                break;
        }
        arr[j + 1] = item;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    insertionSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    return 0;
}

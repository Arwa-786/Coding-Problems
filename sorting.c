#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    for (int i = 0; i <= n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d  ", arr[k]);
    }
}

int main()
{
    int array[8] = {64, 11, 78, 65, 90, 30, 21, 7};
    selectionSort(array, 8);
}
#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    // i goes for n-1 times for swapping all the elements and last element is already in place so till n-1 and not n
    for (i = 0; i < n - 1; i++)
    {
        // if it is larger than uts next, swap! j and j+1 hence j traverses till n-1-i, keeps reducing the traversal
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    return 0;
}

#include <math.h>
#include <stdio.h>


// Quick Sort Function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int j = r;
    int pivot = arr[r];
    while (1)
    {
        while (arr[++i] < pivot);
        while (arr[--j] > pivot);
        if (i < j)
            swap(&arr[i], &arr[j]);
        else
            break;
    }
    swap(&arr[i], &arr[r]);
    return i;
}
void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int q = partition(arr, l, r);
        quickSort(arr, l, q - 1);
        quickSort(arr, q + 1, r);
    }
}








int main()
{
        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        quickSort(arr, 0, n - 1);
        printf("The sorted array is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
		return 0;
}

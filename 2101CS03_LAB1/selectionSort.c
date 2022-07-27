#include <math.h>
#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, minimum_index;
    for (i = 0; i < n - 1; i++)
    {
        minimum_index = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minimum_index])
                minimum_index = j;
        int temp = arr[minimum_index];
        arr[minimum_index] = arr[i];
        arr[i] = temp;
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
        selectionSort(arr, n);
        printf("The sorted array is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
		return 0;
}
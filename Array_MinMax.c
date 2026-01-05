#include <stdio.h>

void findMinAndMax(int arr[], int n) 
{
    int min = arr[0];
    int max = arr[0];
    int i;

    for (i = 1; i < n; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i];
        } 
		else if (arr[i] > max) 
		{
            max = arr[i];
        }
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

int main() 
{
    int arr[];
    int n = sizeof(arr) / sizeof(arr[0]);

    findMinAndMax(arr, n);

    return 0;
}

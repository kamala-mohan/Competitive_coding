// C program for implementation of selection sort
#include <stdio.h>
//#include<sys/time.h>
//#include<time.h>
//#include<sys/resource.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
    int i,size,arr[10];
	//struct timeval tv1, tv2;
    //struct rusage r_usage;

	printf("Enter the input size \n");
    scanf("%d",&size);
    printf("Enter the array elements \n");
    for(i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
    }
    //gettimeofday(&tv1, NULL);
	selectionSort(arr,size);
	//gettimeofday(&tv2, NULL);
	printf("Sorted array: \n");
	printArray(arr,size);
	//printf("\nTime of selection sort = %f microseconds\n",(double)(tv2.tv_usec-tv1.tv_usec));
    //getrusage(RUSAGE_SELF,&r_usage);
    //printf("\nMemory usage: %ld kilobytes\n",r_usage.ru_maxrss);

	return 0;
}

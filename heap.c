#include <stdio.h>
#include<stdlib.h>

//#include<sys/time.h>
//#include<time.h>
//#include<sys/resource.h>

void heapify(int*, int, int);
void heapsort(int*, int);

int main(){

    //struct timeval start_time, end_time;
	//struct rusage space_usage;

    // accepting the ID array
    int *id, total_students, i;
	printf("Enter the total number of elements : "); scanf("%d", &total_students);
	id = (int*)malloc(total_students * sizeof(int));
	printf("Enter the elements :-\n");
	for(i=0; i<total_students; i++) scanf("%d", id+i);


	//gettimeofday(&start_time, NULL);
    heapsort(id, total_students);
	//gettimeofday(&end_time, NULL);

    // displaying the sorted ID array
    printf("after sorting :-\n");
	for(i=0; i<total_students; i++) printf("%d ", id[i]); 
	printf("\n");

	free(id);

	//printf("\n\nTime taken = %f ms\n",(double)(end_time.tv_usec-start_time.tv_usec));
    //getrusage(RUSAGE_SELF, &space_usage);
    //printf("Memory used : %ld kb\n", space_usage.ru_maxrss);

	return 0;
}


void heapify(int a[], int n, int i){
    int largest = i, 
        l = 2*i + 1, 
        r = 2*i + 2;
    
    if(l < n && a[l] > a[largest])                              // finding for the index of largest child node
        largest = l;
    if(r < n && a[r] > a[largest])
        largest = r;
    if(largest != i){                                           // if the root node is not the largest, we swap it with the largest node
        int temp = a[i]; a[i] = a[largest]; a[largest] = temp;
        heapify(a, n, largest);                                 // recursively we heapify all the sub trees
    }
}



void heapsort(int a[], int n){
    // we first build the heap from the given array
    int i;

    for(i=n/2-1; i>=0; i--)                                     // size/2 - 1 gives the index of the parent node
        heapify(a, n, i);

    for(i=n-1; i>0; i--){                                       // deleting elements 1 by 1 and also mainting the heap
        int temp = a[0]; a[0] = a[i]; a[i] = temp;
        heapify(a, i, 0);
    }
}
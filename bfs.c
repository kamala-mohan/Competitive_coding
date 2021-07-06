
/*
Write a C program that, for a given digraph outputs all the vertices reachable
from a given starting vertex using BFS method. Find its time and space complexity.
*/

#include<stdio.h>
#include<stdlib.h>

//#include<sys/time.h>
//#include<time.h>
//#include<sys/resource.h>

typedef struct Queue Queue;

struct  Queue{
	int *Q;
	int front;
	int rear;
};

void enqueue(Queue *q, int num){
	q->Q[++ q->front] = num;
}

int dequeue(Queue *q){
	return q->Q[++ q->rear];
}

void BFS(int **mat, int n, int v){
    int i;
    // initailising the queue structure
    Queue q; q.front = -1; q.rear = -1; q.Q = (int *)malloc(sizeof(int) * n);

    // initailing any array to note status of node, initailly 0 -> not visited
    int *visited = (int *)malloc(sizeof(int) * (n+1));

    // adding the starting node to the queue and marking it as visited
    enqueue(&q, v);
	visited[v] = 1;

    // until the queue is not empty the DFS process is executed
    while(q.front != q.rear){
		v = dequeue(&q);
        printf("%d--> ", v);

		for(i=1; i<=n; i++){
			if(mat[v][i] == 1 && visited[i]!=1){
				enqueue(&q, i);
				visited[i] = 1;
			}
		}
	}

}

int main(){

	//struct timeval start_time, end_time;
	//struct rusage space_usage;

	int startVertex, vertesis, i, j;
	printf("\nEnter the total vertesis in the graph : ");
	scanf("%d", &vertesis);

	// int adjMatrix[vertesis + 1][vertesis + 1];
    int **adjMatrix = (int **)malloc(sizeof(int *) * (vertesis+1));
    for(int i=0; i<vertesis+1; i++){
        adjMatrix[i] = (int *)malloc((vertesis+1) * sizeof(*adjMatrix[i]));
    }

	printf("\nEnter the adjecency matrix :-\n");
	for(i=1; i<=vertesis; i++){
		for(j=1; j<=vertesis; j++)
			scanf("%d", &adjMatrix[i][j]);
	}

	printf("\nEnter the selected element to start from : ");
	scanf("%d", &startVertex);

	printf("\nDisplaying the reachable nodes using BFS ...");

	//gettimeofday(&start_time, NULL);

    BFS(adjMatrix, vertesis, startVertex);

	//gettimeofday(&end_time, NULL);

	//printf("\n\nTime taken = %f microseconds\n",(double)(end_time.tv_usec-start_time.tv_usec));
    //getrusage(RUSAGE_SELF, &space_usage);
    //printf("Memory used : %ld kb\n", space_usage.ru_maxrss);

	return 0;
}

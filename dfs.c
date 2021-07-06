#include<stdio.h>
#include<sys/time.h>
#include<time.h>
#include<sys/resource.h>

 
void DFS(int);
int a[10][10],reached[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
 
void main()
{
    int i,j,v;
    struct timeval tv1, tv2;
    struct rusage r_usage;

    printf("Enter number of vertices:");
   
	scanf("%d",&n);
 
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        reached[i]=0;
    
    printf("enter the first node:");
    scanf("%d",&v);
    gettimeofday (&tv1, NULL);
    DFS(v);
    gettimeofday (&tv2, NULL);
    printf("\nTime of dfs = %f microseconds\n",(double)(tv2.tv_usec-tv1.tv_usec));

    getrusage(RUSAGE_SELF,&r_usage);
    printf("\nMemory usage: %ld kilobytes\n",r_usage.ru_maxrss);

}
 
void DFS(int i)
{
    int j;
    reached[i]=1;
	
	for(j=1;j<=n;j++)
	{
	    if(a[i][j]==1&&!reached[j])
	    {
	        printf("\n %d->%d",i,j);
            DFS(j);
	    }
	}
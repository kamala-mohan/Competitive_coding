#include<stdio.h>
#include<sys/time.h>
#include<time.h>
#include<sys/resource.h>

int a[20][20], q[20], visited[20];
int n, i, j, f = 0, r = -1;

void bfs (int v) 
{
for (i = 1; i <= n; i++)
    
 
if (a[v][i] && !visited[i])
      
 
q[++r] = i;
  
if (f <= r)
    
{
      
 
visited[q[f]] = 1;
      
 
bfs (q[f++]);
    
 
}

 
}


 
int main () 
{
  
 
int v;
  
struct timeval tv1, tv2;
  
struct rusage r_usage;
  
 
printf ("\n Enter the number of vertices:");
  
 
scanf ("%d", &n);
  
 
for (i = 1; i <= n; i++)
    
    {
      
 
q[i] = 0;
      
 
visited[i] = 0;
    
 
}
  
 
printf ("\n Enter adjacencey matrix :\n");
  
 
for (i = 1; i <= n; i++)
    
 
for (j = 1; j <= n; j++)
      
 
scanf ("%d", &a[i][j]);
  
 
printf ("\n Enter the source :\n");
  
 
scanf ("%d", &v);
  
gettimeofday (&tv1, NULL);
  
bfs (v);
  
gettimeofday (&tv2, NULL);
  
 
printf ("\n The node which are reachable are:\n");
  
 
for (i = 1; i <= n; i++)
    
 
if (visited[i])
      
 
printf ("%d\t", i);
  
else
      
 
printf ("\n Bfs is not possible");
  
 
printf ("Time of BFS=%f microseconds",
	     (double) (tv2.tv_usec - tv1.tv_usec));
  
getrusage (RUSAGE_SELF, &r_usage);
  
printf ("Memory usage:%ld kilobytes", r_usage.ru_maxrss);
  
 
return 0;

 
}
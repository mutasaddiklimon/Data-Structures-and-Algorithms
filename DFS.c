#include<stdio.h>

void DFS(int);
int G[50][50], visited[50], n;

void DFS(int i)
{
    int j;
    printf("\n%d", i);
    visited[i] = 1;

    for(j=0; j<n; j++) {
        if(!visited[j] && G[i][j]==1) {
            DFS(j);
        }
    }
}

int main()
{
    int i, j;
    printf("Enter number of vertices: ");

    scanf("%d", &n);

    printf("\nEnter adjecency matrix of the graph: \n");

    for(i=0; i<n; i++) {
       for(j=0; j<n; j++) {
            scanf("%d", &G[i][j]);
       }
    }

   for(i=0; i<n; i++) {
        visited[i] = 0;
   }

    DFS(0);
}

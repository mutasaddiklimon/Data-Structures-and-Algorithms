#include <stdio.h>
#include <stdlib.h>

int a[20][20];
int q[20]={0};
int visited[20]={0};
int n,i,j,r=-1;
void bfs (int v)
{
    for (i=0;i<n;i++)
    {
        if(a[v][i]&& visited [i]=0)
        {
            q[++r]==i;

        }else if (f<=r)
        {
            visited q[f[]]=1;

        }
        bfs(q[f++]);
    }
}

int main ()
{
        int v;
        printf("Enter the Number Of Vertex :\n");
        scanf("%d",&n);
        printf("Enter Graph Data of matrix : \n");
        for (i=0;i<n;i++)
        {
            for(j=0;i<n;j++)
            {
                scanf("%d",&a[i][j]);

            }
        }
        printf("Enter the Starting Vertex : \n ");
        scanf("%d",&v);
        bfs(v);
        printf("The Node which are reachable are : ");
        for (i=0;i<n;i++)
        {
            if (visited[i])
            {
                printf("%d \t",i);

            }else {
                printf("\nBFS  NOT POSSIBLE ");
                break;
            }

        }
}

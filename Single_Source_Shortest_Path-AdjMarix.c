#include<stdio.h>
#define INF 999

int main(){
    int cost[10][10],dist[10],visited[10];
    int n, source;

    printf("Enter the Number of Vertices : ");
    scanf("%d",&n);

    printf("Enter the Cost Matrix [999 if no edge] : \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&cost[i][j]);
        }
    }

    printf("Enter the Source Vertex : ");
    scanf("%d",&source);

    for(int i = 0 ; i < n ; i++){
        dist[i] = cost[source][i];
        visited[i] = 0;
    }

    visited[source] = 1;
    dist[source] = 0;

    for(int i = 1 ; i<n ; i++){
        int min = INF , u = -1;
        for(int j = 0 ; j < n ; j++){
            if(!visited[j] && dist[j] < min){
                min = dist[j];
                u = j;
            }
        }

        if(u == -1) break;

        visited[u] = 1;

        for(int j = 0 ; j < n ; j++){
            if(!visited[j] && dist[u]+cost[u][j] < dist[j]){
                dist[j] = dist[u] + cost[u][j];
            }
        }
    }

    printf("Single Source Shortest Path : ");
    for(int i =  0; i < n ; i++){
        printf("%d -> %d = %d\n",source ,i, dist[i]);
    }
}
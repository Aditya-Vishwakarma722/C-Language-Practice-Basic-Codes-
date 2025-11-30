#include<stdio.h>
#define MAX 10

int adj[MAX][MAX], visited[MAX];
int n;

int DFS(int v){
    visited[v] = 1;
    printf("%d\t",v);

    for(int i = 0 ; i < n ; i++){
        if(adj[v][i] = 1 && !visited[i]){
            DFS(i);
        }
    }
}

int main(){
    printf("Enter the Number of Vertices : ");
    scanf("%d",&n);

    printf("Enter the Adjacency Matrix : \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&adj[i][j]);
        }
    }

    for(int i  = 0 ; i<n ; i++){
        visited[i] = 0;
    }

    int start;
    printf("Enter the Starting Point : ");
    scanf("%d",&start);

    printf("Depth First Traversal : ");
    DFS(start);

    return 0;
}
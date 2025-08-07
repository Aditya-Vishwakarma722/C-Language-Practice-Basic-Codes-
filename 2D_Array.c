#include<stdio.h>
int main()
{
    int m,n,i,j;
    int arr1[10][10],arr2[10][10],arr3[10][10];
    printf("Enter the elemnts of the Matrix :\n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Element (Martrix - 1) [%d] [%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Element (Matrix - 2) [%d] [%d] : ",m+1,n+1);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Sum of the two matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,m,n,sum[100][100],arr1[100][100],arr2[100][100];
    printf("Enter the Number of Rows in the Matrix :\n");
    scanf("%d",&m);
    printf("Enter the Number of Columns in the Matrix :\n");
    scanf("%d",&n);

    printf("\n");

    printf(": Matrix - 1 :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element [%d] [%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf(": Matrix - 2 :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element [%d] [%d] : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    printf("The Sum of the Two Matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",sum[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
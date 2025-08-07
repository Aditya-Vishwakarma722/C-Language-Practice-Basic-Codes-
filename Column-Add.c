#include<stdio.h>
int main()
{
    int i,j,m,n,arr[10][10],sum=0;
    printf("Enter the Elements Of the Matrix :\n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Element [%d] [%d] :",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("Sum of the Rows :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=arr[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }

    printf("Sum of the Columns :\n");
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            sum+=arr[i][j];
        }
        printf("%d\n",sum);
        
    }
    return 0;
}
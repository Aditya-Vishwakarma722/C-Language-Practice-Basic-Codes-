#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter Any Number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t",i);
    }
    printf("\n");
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
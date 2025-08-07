#include<stdio.h>
int greatest(int a,int b,int c)
{
    return(a>b?(a>c?a:c):(b>c?b:c));
}
int main()
{
    int x,y,z,greater;
    printf("Enter Any Three Numbers :\n");
    scanf("%d %d %d",&x,&y,&z);
    greater=greatest(x,y,z);
    printf("Greatest Number is : %d",greater);
    return 0;
}
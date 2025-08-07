#include<stdio.h>
int Product(int a,int b)
{
    return a*b;
}
int main()
{
    int x,y,pro;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&x,&y);
    pro=Product(x,y);
    printf("Answer is : %d",pro);
    return 0;
}

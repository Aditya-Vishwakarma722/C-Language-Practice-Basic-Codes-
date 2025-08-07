#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);
    if (n%2==0)
    {
       printf("Entered Number is Even.");
    }
    else
    {
        printf("Entered Number is Odd.");
    }
    return 0;
}
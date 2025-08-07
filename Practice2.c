#include<stdio.h>

int factorial(int n)
{
    if (n==0 || n==1){
    return 1;}

    else{
    return n*factorial(n-1);
    }
}

    int main()
    {
        int num;
        printf("Enter a Number : ");
        scanf("%d",&num);
        if(num<0)
        {
            printf("Cannot Give the Factorial of a Negative Number.");
        }
        
        else
        {
        int result = factorial(num);
        printf("Factorial of %d : %d",num,result);
        }
        return 0;
    }
    
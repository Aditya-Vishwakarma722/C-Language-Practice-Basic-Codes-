#include<stdio.h>
int factorial(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,factorial(n));
}
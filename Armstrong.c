#include<stdio.h>
int armstrong(int num){
    int remainder,result=0;
    while(num!=0)
    {
    remainder=num%10;
    result+=remainder*remainder*remainder;
    num/=10;
    }
    return result;
}

int main()
{
    int number,resultant,original;
    printf("Enter any Number :\n");
    scanf("%d",&number);
    original=number;
    resultant=armstrong(number);

    if(original==resultant)
    {
        printf("%d is an Armstrong Number.",original);
    }
    else
    {
        printf("%d is not an Armstrong Number.",original);
    }
    return 0;
}
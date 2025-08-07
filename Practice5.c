#include<stdio.h>
int main()
{
    int num,original,reversed,remainder;
    printf("Enter any Number :\n");
    scanf("%d",&num);

    original=num;

    while (num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }

    if(original==reversed)
    {
        printf("Given Number is Palindrome.");
    }
    else
    {
        printf("Given Number is Palindrom.");
    }
    return 0;
}
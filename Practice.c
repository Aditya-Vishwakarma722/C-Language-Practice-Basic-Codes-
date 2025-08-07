#include<stdio.h>

float FtoC(float fahrenheit){
    return (fahrenheit-32)*5/9;
}

float CtoF(float celsius){
    return (celsius*9/5)+32;
}

int main()
{
    int choice;
    float result,Fahrenheit,Celsius;
    printf("Enter Your Choice (1 - Fahreheit to Celsius || 2- Celsius to Fahrenheit) : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        {
            printf("Enter the Temperature in Fahrenheit : ");
            scanf("%f",&Fahrenheit);
            result=FtoC(Fahrenheit);
            printf("%.2f F In Celsius : %.2f",Fahrenheit,result);
            break;
        }

        case 2:
        {
            printf("Enter the Temperature in Celsius : ");
            scanf("%f",&Celsius);
            result=CtoF(Celsius);
            printf("%.2f C In Fahrenheit : %.2f",Celsius,result);
            break;
        }

        default:
        {
            printf("Enter a Valid Number [1 or 2].");
            break;
        }
    }

    return 0;
}
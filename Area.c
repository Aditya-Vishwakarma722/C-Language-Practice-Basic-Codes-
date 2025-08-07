#include<stdio.h>
#include<math.h>
int main()
{
    int Side,Perimeter,Area;
    printf("Enter the side of the Square : ");
    scanf("%d",&Side);
    Perimeter=Side*4;
    Area=pow(Side,2);
    printf("Area Of the Square = %d\n",Area);
    printf("Perimeter of the Square = %d",Perimeter);
    return 0;
}
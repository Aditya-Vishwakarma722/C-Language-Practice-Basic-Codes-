#include<stdio.h>

float areaofCircle(float radius){
    return 3.14*radius*radius;
}

float areaofRectangle(float length,float breadth){
    return length*breadth;
}

float areaofTriangle(float base,float height){
    return 0.5*base*height;
}

float areaofSquare(float side){
    return side*side;
}

int main()
{
    int choice;
    float result;
    printf("1 - Area of Circle\n2 - Area of Rectangle\n3 - Area of Triangle\n4 - Area of Square\n");
    printf("Enter a Number [1 - 4] : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    {
        float r;
        printf("Enter Radius Of the Circle :\n\n ");
        scanf("%f",&r);
        result=areaofCircle(r);
        printf("Area of the Circle = %.2f",result);
        break;
    }

    case 2:
    {
        float l,b;
        printf("Enter the Length & Breadth of the Rectangle :\n");
        scanf("%f%f",&l,&b);
        result=areaofRectangle(l,b);
        printf("Area of the Rectangle : %.2f",result);
        break;
    }

    case 3:
    {
        float b,h;
        printf("Enter the Base & Height of the Traingle :\n ");
        scanf("%f %f",&b,&h);
        result=areaofTriangle(b,h);
        printf("Area of the Triangle : %.2f",result);
        break;
    }

    case 4:
    {
        float s;
        printf("Enter the Side of the Square :\n ");
        scanf("%f",&s);
        result=areaofSquare(s);
        printf("Area of the Square : %.2f",result);
        break;
    }

    default:
    {
        printf("Enter Number between 1 - 4.");
        break;
    }
    return 0;
    }
}
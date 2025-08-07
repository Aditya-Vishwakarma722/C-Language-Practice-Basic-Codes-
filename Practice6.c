#include<stdio.h>

int callbyvalue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Value Under Function [Call by Value] : %d,%d\n",a,b);
}

int callbyreference(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Value Under Function [Call by Reference] : %d,%d\n",*a,*b);
}


int main()
{
    int x,y,res1,res2;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);

    printf("Value Before Swap : %d,%d\n",x,y);
    res1=callbyvalue(x,y);
    printf("Value after Swapping [Call by Value] : %d,%d\n",x,y);
    res2=callbyreference(&x,&y);
    printf("Value after Swapping [Call by Reference] : %d,%d\n",x,y);
    return 0;
}
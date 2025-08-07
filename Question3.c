#include<stdio.h>
int positive_or_negative(int x){
if(x<=0){
    return 1;
}
else if(x>0){
    return 0;
}
}

int main()
{
    int a,res;
    printf("Enter a Number :\n");
    scanf("%d",&a);
    res=positive_or_negative(a);
    if(res==1){
        printf("%d is negative",a);
    }
    else if(res==0){
        printf("%d is positive",a);
    }
    return 0;
}
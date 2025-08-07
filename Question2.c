#include<stdio.h>
int odd_or_even(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int x,res;
    printf("Enter any number :\n");
    scanf("%d",&x);
    res=odd_or_even(x);
    if(res==1){
        printf("%d is Even",x);
    }
    else if(res==0){
        printf("%d is Odd",x);
    }
    return 0;
}
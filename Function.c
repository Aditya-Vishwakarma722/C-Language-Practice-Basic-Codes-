#include<stdio.h>
int sum(int a,int b){
    return a+b;}
int main(){
    int x,y,res;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&x,&y);
    res = sum(x,y);
    printf("%d",res);
    return 0;}
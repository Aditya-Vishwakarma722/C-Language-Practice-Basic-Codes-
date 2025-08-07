#include<stdio.h>
int main()
{
    int a=49,b=5,c,d,e,f;
    c=a%b;
    d=a%-b;
    e=-a%b;
    f=-a%-b;
    printf("%d\n%d\n%d\n%d",c,d,e,f);
    return 0;
}
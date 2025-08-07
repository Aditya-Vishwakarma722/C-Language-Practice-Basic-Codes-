#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("Adi.txt","a");
    num = 60616;
    fprintf(ptr,"%d",num);
    fclose(ptr);
}
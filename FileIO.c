#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Aditya.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("Value in the File is %d",num);
    
    fclose(ptr);
}
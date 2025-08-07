#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Adi.txt","a");
    fputc('d',ptr);
}
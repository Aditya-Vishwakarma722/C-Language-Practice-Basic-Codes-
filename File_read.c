#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Adi.txt","r");
    char ch;
    printf("The Data in the file is :\n");
    while(1){
        ch=fgetc(ptr);
        printf("%c",ch);
        if(ch == EOF)
        {
            break;
        }
    }
    return 0;
}
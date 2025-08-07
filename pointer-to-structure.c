#include<stdio.h>
#include<string.h>

struct system
{
    int number;
    int model;
    char item[100];
};

int main()
{
    struct system sys1;
    struct system *ptr;
    ptr=&sys1;

    printf("Enter Number :\n");
    scanf("%d",&sys1.number);

    printf("Enter Model :\n");
    scanf("%d",&sys1.model);
    getchar();

    printf("Enter Item :\n");
    fgets(sys1.item,sizeof(sys1.item),stdin);
    sys1.item[strcspn(sys1.item,"\n")] = 0;

    printf("\n");

    printf("Number : %d\nModel : %d\nItem : %s\n",ptr->number,ptr->model,ptr->item);
    return 0;
}
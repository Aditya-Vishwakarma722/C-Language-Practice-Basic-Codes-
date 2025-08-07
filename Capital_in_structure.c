#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct members
{
    char doj[100];
    int fees;
    char name[100];
};

int main(){
    struct members class;
    struct members *ptr;
    ptr = &class;

    printf("Enter the Name of the Member :\n");
    fgets(ptr->name,sizeof(ptr->name),stdin);
    ptr->name[strcspn(ptr->name,"\n")] = 0;
    printf("\n");

    printf("Enter the Date of Joining of the Member :\n");
    fgets(ptr->doj,sizeof(ptr->doj),stdin);
    ptr->doj[strcspn(ptr->doj,"\n")] = 0;
    printf("\n");

    printf("Enter the Fees of the Student :\n");
    scanf("%d",&ptr->fees);

    printf("\n");

    for(int i=0;ptr->name[i]!='\0';i++){
    ptr->name[i] = toupper(ptr->name[i]);
    }

    printf("\n");
    printf("Name of the Member : %s\n",ptr->name);
    printf("Date of Joining of the Member : %s\n",ptr->doj);
    printf("Fees of the Member : %d\n",ptr->fees);

    return 0;

}

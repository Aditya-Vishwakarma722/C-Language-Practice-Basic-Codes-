#include<stdio.h>

int calculated(int *marks, int number_of_students,char gender){
    int res = 0;
    if(gender == 'b'){    // Even elements sum for boys
        for(int i = 0 ; i<number_of_students ; i+=2){
            res += marks[i];
        }
    }
    else{                 // Odd elements sum for girls
        for(int i = 1 ; i<number_of_students ; i+=2){
            res += marks[i];
        }
    }

    return res;
}

int main(){
    int number_of_student;
    char gender;
    printf("Enter the Number of Student : ");
    scanf("%d",&number_of_student);
    int marks[number_of_student];

    printf("Enter Marks :\n");
    for(int i = 0 ; i<number_of_student ; i++){
        scanf("%d",&marks[i]);
    }

    printf("Enter Gender : ");
    scanf(" %c",&gender);

    int sum = calculated(marks, number_of_student, gender);
    printf("Sum = %d",sum);

    return 0;
}
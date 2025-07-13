#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main(){

    Student student1 = {"Teddy", 15, 3.4, true};
    Student student2 = {"Oliver", 10, 3.0, true};
    Student student3 = {"Rick", 60, 4.0, false};
    Student student4 = {"Chris", 34, 3.2, true};
  
    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime)?"Yes" : "No");

    return 0;
}

void printStudent(Student student){
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime)?"Yes" : "No");   
    printf("\n");
}
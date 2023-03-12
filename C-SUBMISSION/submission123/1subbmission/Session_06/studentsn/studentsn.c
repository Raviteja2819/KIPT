#include <stdio.h>
struct student {
    char nameofstudent[50];
    int rollno;
    float total_score;
    int age;
} s;

int main() {
    printf("enter the student's information:\n");
    printf("enter student's name: ");
    fgets(s.nameofstudent, sizeof(s.nameofstudent), stdin);

    printf("enter student's rollno: ");
    scanf("%d", &s.rollno);
    printf("enter marks of student: ");
    scanf("%f", &s.total_score);

    printf("Displaying Information:\n");
    printf("nameofstudent: ");
    printf("%s", s.nameofstudent);
    printf("rollno number: %d\n", s.rollno);
    printf("total_score: %.1f\n", s.total_score);

    return 0;
}

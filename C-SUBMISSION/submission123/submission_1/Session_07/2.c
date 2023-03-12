#include <stdio.h>
struct student {
    char nameosstudent[50];
    int rollno;
    float mrks;
} s[10];

int main() {
    int i;
    for (i = 0; i < 5; ++i) {
        s[i].rollno = i + 1;
        printf("\nROll NUMBER%d,\n", s[i].rollno);
        printf("please enter the name: ");
        scanf("%s", s[i].nameosstudent);
        printf("Enter mrks: ");
        scanf("%f", &s[i].mrks);
    }
    printf("printing the information\n\n");
    for (i = 0; i < 5; ++i) {
        printf("\nrollno number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].nameosstudent);
        printf("mrks: %.1f", s[i].mrks);
        printf("\n");
    }
    return 0;
}

#include"GradeSchool.h"

int main(){
    int ch;
    int flag = 0; //used to notify the number of students been added to the roster.
    struct Roster r1[20];
    struct Roster* rst = r1;
    char name[25];
    int grade;
    int p=0;
while(p==0){
        printf("Select from the Menu: \n");
    printf(" 1 - Add a student's name to a selected grade\n 2 - Give the list of all the students from a selected Grade\n 3 - Print out the whole Roster\n 4 - Exit\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch){
    case(1):
        printf("Enter the student's name: ");
        scanf("%s", name);
        printf("Enter the student's grade: ");
        scanf("%d", &grade);
        AddStudent(rst, name[25], grade, flag);
        flag++;
        continue;
    case(2):
        printf("Enter the Grade you wish to view: ");
        scanf("%d", &grade);
        DisplayStudentsOfTheGrade(rst, grade);
        continue;
    case(3):
        DisplayRoster(rst, flag);
        continue;
    case(4):
        p=1;
    }
}

return 0;
}

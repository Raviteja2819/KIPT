#include<stdio.h>
#include<string.h>

struct Roster{
    char name[25];
    int grade;
};


void AddStudent(struct Roster *s, char nme[25], int grde, const int flag){
    strcpy(s->name, nme);
    printf("%s\n", s->name);
    s->grade = grde;
    printf("%d\n", s->grade);
    s++;
}

void DisplayStudentsOfTheGrade(struct Roster *s, const int *grade){
    printf("Students of Grade %d are \n", *grade);
    for(int i =0; i < 20; i++){
        if(s->grade == *grade)
            printf("%s\n", s->name);
    }
}

void DisplayRoster(struct Roster *s, const int flag){
    for(int i =0;i < flag; i++){
        printf(" %s in grade %d\n", s->name, s->grade);
        s++;
    }
}

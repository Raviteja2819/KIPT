#include<stdio.h>
struct Trainee {
int empid;
char name[20];
int age;
double scores[5];
};
/*Find total of all scores of a trainee.
Find average score of module from all employees.
Find average total of employees.*/
int main(){
    struct Trainee tarr[10];
    double ta=0.00;
    for(int i=0;i<10;i++){
            double total=0.00;
            for(int j=0;j<5;j++){

             tarr[i].scores[j]=(i+1)*(j+1)*1.8;
             total=total+tarr[i].scores[j];

            }
            ta=ta+total;
            printf("total of all scores of a trainee %d= %.2f\n",i+1,total);
    }
    for(int i=0;i<5;i++){
            double avg=0.00;
            for(int j=0;j<10;j++){

             avg=avg+tarr[j].scores[i];

            }
            printf("average score of module %d from all employees = %.2f\n",i+1,avg/5);
    }
    printf("average total of employees %.2f",ta/10);
    return 0;
}

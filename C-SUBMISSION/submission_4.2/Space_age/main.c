#include<stdio.h>
#include<string.h>
#include<math.h>
#define mercury 1
int main(){
    unsigned long int age=0;
    scanf("%lu",&age);
    float eage=(float)age/31557600,space;
    for(int i=1;i<=8;i++){
            printf("(%d) ",i);
        switch(i){
    case 1:
        printf("%.2f   Earth years old on Earth\n",eage);
        continue;
    case 2:
        space= 0.2408467*eage;
        printf("%.2f   Earth years old on MERCURY\n",space);
        continue;
    case 3:
        space= 0.61519726*eage;
        printf("%.2f   Earth years old on Venus\n",space);
        continue;
    case 4:
        space= 1.8808158*eage;
        printf("%.2f   Earth years old on MARS\n",space);
        continue;
    case 5:
        space= 11.862615*eage;
        printf("%.2f  Earth years old on JUPITER\n",space);
        continue;
    case 6:
        space= 29.447498*eage;
        printf("%.2f  Earth years old on SATRUN\n",space);
        continue;
    case 7:
        space= 84.016846*eage;
        printf("%.2f  Earth years old on URANUS\n",space);
        continue;
    case 8:
        space= 164.79132*eage;
        printf("%.2f Earth years old on NEPTUNE\n",space);
        continue;
        }
    }

    return 0;
}

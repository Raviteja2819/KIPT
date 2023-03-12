#include<stdio.h>

void ListOfAllergies(int score){
    if(score>=1024)
        score-=1024;
    if(score>=512)
        score-=512;
    if(score>=256)
        score-=256;
    if(score>=128){
        printf("Patient is allergic to cats\n");
        score-=128;
    }
    if(score>=64){
        printf("Patient is allergic to pollen\n");
        score-=64;
    }
    if(score>=32){
        printf("Patient is allergic to chocolate\n");
        score-=32;
    }
    if(score>=16){
        printf("Patient is allergic to tomatoes\n");
        score-=16;
    }
    if(score>=8){
        printf("Patient is allergic to strawberries\n");
        score-=8;
    }
    if(score>=4){
        printf("Patient is allergic to Shellfish\n");
        score-=4;
    }
    if(score>=2){
        printf("Patient is allergic to peanuts\n");
        score-=2;
    }
    if(score>1){
        printf("Patient is allergic to eggs\n");
        score-=1;
    }
    if(score > 0)
        printf("Reaminder = %d", score);
}

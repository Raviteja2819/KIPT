#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a=0;
    char c[100],s;
    printf("Enter the number to convert it into Roman Number:");
    scanf("%d",&a);
    while(a>0){
    if(a>=1000){
        a-=1000;
        s='M';
        strncat(c,&s,1);
    }
    else if(a>=900){
        a-=900;
        s='C';
        strncat(c,&s,1);
        s='M';
        strncat(c,&s,1);
    }
    else if(a>=500){
        a-=500;
        s='D';
        strncat(c,&s,1);
    }
    else if(a>=400){
        a-=400;
        s='C';
        strncat(c,&s,1);
        s='D';
    }
    else if(a>=100){
        a-=100;
        s='C';
        strncat(c,&s,1);
    }
    else if(a>=90){
        a-=90;
        s='X';
        strncat(c,&s,1);
        s='C';
        strncat(c,&s,1);
    }
    else if(a>=50){
        a-=50;
        s='L';
        strncat(c,&s,1);
    }
    else if(a>=40){
        a-=40;
        s='X';
        strncat(c,&s,1);
        s='L';
        strncat(c,&s,1);
    }
    else if(a>=10){
        a-=10;
        s='X';
        strncat(c,&s,1);
    }
    else if(a>=9){
        a-=9;
        s='I';
        strncat(c,&s,1);
        s='X';
        strncat(c,&s,1);
    }
    else if(a>=5){
        a-=5;
        s='V';
        strncat(c,&s,1);
    }
    else if(a>=4){
        a-=4;
        s='I';
        strncat(c,&s,1);
        s='V';
        strncat(c,&s,1);
    }
    else if(a>=1){
        a-=1;
        s='I';
        strncat(c,&s,1);
    }
   }
    printf("%s",c);
    return 0;
}

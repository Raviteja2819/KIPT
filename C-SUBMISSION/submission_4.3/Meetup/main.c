#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char des1[10],des2[10],mon[10];
    printf("scan the descriptor1:");
    scanf("%s",des1);
    int a=0,b=0,c=0;
    char *d[13]={"first", "second", "third", "fourth", "fifth", "last", "monteenth", "tuesteenth", "wednesteenth", "thursteenth", "friteenth", "saturteenth", "sunteenth"};
    for(int i=0;i<13;i++){
        if(strcmp(des1,d[i])==0){
            a=i+1;
            if(i<6){
                printf("scan descriptor2:");
                scanf("%s",des2);
            }
        }
    }
    char *w[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(int j=0;j<7;j++){
        if(strcmp(des2,w[j])==0){
            b=j+1;

        }
    }
    printf("scan the month:");
    scanf("%s",mon);
    char *m[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(int k=0;k<12;k++){
        if(strcmp(mon,m[k])==0){
            c=k+1;

        }
    }
    printf("scan the year:");
    int y;
    scanf("%d",&y);
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
    {
                month[1]=29;
    }
    /*Here is a formula for finding the day of the week for ANY date.

    N = d + 2m + [3(m+1)/5] + y + [y/4] - [y/100] + [y/400] + 2*/
    if(c==1){
        c=13;
        y=y-1;
    }
    if(c==2){
        c=14;
        y=y-1;
    }
    int l= (2*c + (3*(c+1)/5)+ y+(y/4)-(y/100)+(y/400)+2);
    l=l%7;
    if(b<l){
        b=b+7;
    }
    l=b-l;
    int date=0;
    if(a<6){
        date=((a-1)*7)+l;
    }
    else if(a==6){
        date=((a-1)*7)+l;
        while(date>month[c]){
            date=date-7;
        }
    }
    else{
        date=a+6;
    }
    if(c==13){
        c=1;
        y=y+1;
    }
    if(c==14){
        c=2;
        y=y+1;
    }
    printf("%d/%d/%d",y,c,date);

    return 0;
}

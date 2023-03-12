#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
//void print(struct final_value f);
int main()
{

    char *register_color[]={"Black","Brown","Red","Orange","Yellow","Green","Blue","Violet","Grey","White"};
    char str1[10],str2[10],str3[10];
    scanf("%s %s %s",str1,str2,str3);
    printf("colors of the register are %s-%s-%s\n",str1,str2,str3);
    int  a,b,c;
    for(int i=0;i<10;i++){
        if(strcmp(str1,register_color[i])==0){
                a=i;
        }
        if(strcmp(str2,register_color[i])==0){
                b=i;
        }
        if(strcmp(str3,register_color[i])==0){
                c=i;
        }

    }
    //printf("%d\t%d\t%d\n",a,b,c);
    if(c<3){
    printf("unit of the resister are in OHMs");
    }
    if(c>=3 && c<6){
        printf("unit of the resister are in KILOOHMs");
        c=c-3;
        //printf("%d\n",c);
    }
    if(c>=6){
        printf("unit of the resister are in MEGAOHMs");
        c=c-6;
        //printf("%d\n",c);
    }
    unsigned long int value = (a*10 +b)*pow(10,c);
    return value;
}


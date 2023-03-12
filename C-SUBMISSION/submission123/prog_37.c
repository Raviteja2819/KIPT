#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp =  fopen("C:\Users\k.Raviteja\Desktop.txt", "w");
    if(fp == NULL){
        printf("File is not created");
        exit(1);
    }
    char s[35] = "My name is Bhanu Praneeth\n";
    fprintf(fp, "%s", s);
    fclose(fp);
    fopen("C:\Users\k.Raviteja\Desktop.txt", "a");
    for(int i =65;i<= 96; i++){
        fputc(i, fp);
    }
    fclose(fp);
    char s1[35];
    fopen("C:\Users\k.Raviteja\Desktop.txt", "r");
    fread(s1, sizeof(char), sizeof(s1), fp);
    printf("%s", s1);
    printf("\n");
    fclose(fp);
    return 0;
}

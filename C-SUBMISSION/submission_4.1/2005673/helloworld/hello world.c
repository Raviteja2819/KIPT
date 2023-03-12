#include<stdio.h>
const char* hello(){
char  *name="Hello world1";
return name;
}
char* world(){
return "Hello world2";
}
int main(){
    printf("%s",hello());
    printf("\n%s",world());
    }

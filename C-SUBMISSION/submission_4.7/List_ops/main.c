#include "ops.h"
int main()
{
    printf("1-append\n2-concatenate\n3-filter\n4-length\n5-map\n6-foldl\n7-foldr\n8-reverse\n\nGIVEN lists are\nl1[100]={1,2,3,4,5,8,6,7}\nl2[100]={6,7,8,99,5,57,10}\nl3[100]={1,5,4,8,6,9,8,5,5,55,4,15,151,51,54,45,8}\n\nSelect any option to perform the respective operation:");
    int n=0,a=0,b=0,c=0;
    scanf("%d",&n);
    int l1[100]={1,2,3,4,5,8,6,7},l2[100]={6,7,8,99,5,57,10},l3[100]={1,5,4,8,6,9,8,5,5,55,4,15,151,51,54,45,8};
    switch(n){
    case(1):
        append(l1,l2);
        break;
    case(2):
        concatenate(l1,l2,l3);
        break;
    case(3):
        printf("1-EVEN from l1\n2-Odd from l1\n\nSelect any predicate from given predicates:");
        int d=0,e=0;
        scanf("%d",&d);
        filter(d,l1,&e);
        for(int i=0;i<e;i++){
            printf("%d\t",l1[i]);
        }
        break;
    case(4):
        length(l2,&b);
        length(l1,&a);
        length(l3,&c);
        break;

    case(5):
        printf("Function 3x+5=y is performed on list 1\n");
        mapp(l1);
        break;
    case(8):
        reversee(l1);
        break;
    case(9):
        return 0;
    }
    return 0;
}

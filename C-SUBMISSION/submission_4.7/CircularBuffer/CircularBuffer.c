#include"CircularBuffer.h"

int main(){
    char que[N] = {'*'};
    int flag = 0, flag1 = 0;
    char ele;
    int choice;
    int p =10;
    menu();
    while(1){

        printf("Enter your choice from given menu: ");
        scanf("%d", &choice);
        if(choice == 1){
            printf("Enter the element you choose to push into the que: ");
            scanf(" %c", &ele);
        }

        switch(choice){
        case(1):
            enQue(que, ele, flag);
            if(flag < N)
                flag++;
            else
                flag ==0;
            break;
        case(2):
            deQue(que, flag1);
            if(flag1 < N)
                flag1++;
            else
                flag1 ==0;
            break;
        case(3):
            Display(que);
            break;
        case(4):
            exit(0);
        default:
            exit(0);
        }
        p--;
    }

    return 0;
}

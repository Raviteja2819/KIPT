#include"Allergies.h"

int main(){
    int a;
    char b[15];

    printf("Enter the name of the patient: ");
    scanf("%s", b);
    printf("Enter the allergy score: ");
    scanf("%d", &a);

    ListOfAllergies(a);
    return 0;
}

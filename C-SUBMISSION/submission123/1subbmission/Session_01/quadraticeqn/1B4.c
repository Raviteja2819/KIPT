#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, iminant, root_1, root_2, real_partofnum, imaginary_part;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    iminant = b * b - 4 * a * c;
    if (iminant > 0) {
        root_1 = (-b + sqrt(iminant)) / (2 * a);
        root_2 = (-b - sqrt(iminant)) / (2 * a);
        printf("root_1 = %.2lf and root_2 = %.2lf", root_1, root_2);
    }
    else if (iminant == 0) {
        root_1 = root_2 = -b / (2 * a);
        printf("root_1 = root_2 = %.2lf;", root_1);
    }
    else {
        real_partofnum = -b / (2 * a);
        imaginary_part = sqrt(-iminant) / (2 * a);
        printf("root_1 = %.2lf+%.2lfi and root_2 = %.2f-%.2fi", real_partofnum, imaginary_part, real_partofnum, imaginary_part);
    }

    return 0;
}

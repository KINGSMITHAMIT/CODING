#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and same.\n");
                    printf("Root 1 = Root 2 = %.2lf\n", root1);
                    break;
                case 0:
                    printf("Roots are complex and different.\n");
                    printf("Root 1 = %.2lf + %.2lfi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
                    printf("Root 2 = %.2lf - %.2lfi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
                    break;
            }
            break;
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    printf("ENter the coefficients of the equation ax^2+bx+c=0");
    float a , b, c;
    scanf("%f %f %f", &a, &b, &c);
    float d = b*b-4*a*c;
    if(d>0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;
    }
    else if(d==0){

    }
    else {printf("the roots are imaginary")
    }
           return 0;
}

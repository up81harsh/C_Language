#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    
    // get the coefficients of the quadratic equation from the user
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // calculate the discriminant
    discriminant = b*b - 4*a*c;

    // check the value of the discriminant to determine the type of roots
    if (discriminant > 0) {
        // real and different roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are: %.2lf and %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
        // real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are: %.2lf and %.2lf", root1, root2);
    }
    else {
        // complex roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are: %.2lf+%.2lfi and %.2lf-%.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    
    return 0;
}


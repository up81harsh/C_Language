#include <stdio.h>
//void main()
//{
//int x = 10;
//float yx = 10;
//printf("%f", yx);
//}
//int main()
//{
//    int i = -3;
//	int k = i % 2;
//    printf("%d\n", k);
//    return 0;
//}
//int main()
//    {
//        int i = 3;
//        int l = i / -2;
//        int k = i % -2;
//        printf("%d %d\n", l, k);
//        return 0;
//    }

//int main()
//    {
//        float x = 5.3 % 2;
//        printf("Value of x is %f", x);
//        return 0;
//    }

//    int main()
//    {
//        double a = 10;
//        double b = 5.6;
//        double c;
//        c = a + b;
//        printf("%lf", c);
//        return 0;
//    }
//
//    int main()
//    {
//        int d, a = 1, b = 2;
//        d =  a++ + ++b;
//        printf("%d %d %d", d, a, b);
//        return 0;
//    }

//int main(){
//	int x=2,y;
//	y=++x;
//	printf("%d\n",y);
//	int a=2,b;
//	b=a++;
//	printf("%d",b);
//}
//
//    int main()
//    {
//        int i = 0;
//        int x = i++;
//        int y = ++i;
//        printf("%d % d\n", x, y);
//        return 0;
////    }
//#include <stdio.h>
//    int main()
//    {
//        int a = 1;
//        	  printf("%d %d  %d %d %d\n", a++, a++, a++,a++,a++);
//        a = 1;
//              printf("%d %d  %d %d %d\n", a++, a++, a++,++a,a++);
//        a = 1;
//              printf("%d %d  %d %d %d\n", a++, a++, ++a,++a,a++);
//        a = 1;
//              printf("%d %d  %d %d %d\n", a++, ++a, ++a,++a,a++);
//       return 0;
//    }
#include <stdio.h>
#include <math.h>

//int main() {
//    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
//    
//    // get the coefficients of the quadratic equation from the user
//    printf("Enter coefficients a, b and c: ");
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    // calculate the discriminant
//    discriminant = b*b - 4*a*c;
//
//    // check the value of the discriminant to determine the type of roots
//    if (discriminant > 0) {
//        // real and different roots
//        root1 = (-b + sqrt(discriminant)) / (2*a);
//        root2 = (-b - sqrt(discriminant)) / (2*a);
//        printf("Roots are: %.2lf and %.2lf", root1, root2);
//    }
//    else if (discriminant == 0) {
//        // real and equal roots
//        root1 = root2 = -b / (2*a);
//        printf("Roots are: %.2lf and %.2lf", root1, root2);
//    }
//    else {
//        // complex roots
//        realPart = -b / (2*a);
//        imaginaryPart = sqrt(-discriminant) / (2*a);
//        printf("Roots are: %.2lf+%.2lfi and %.2lf-%.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
//    }
//    
//    return 0;
//}

int main() {
    int rows, i, j, space, num;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

        for(i = 1; i <= rows; i++) 
		{
           num = 1;
           space = rows - i;
           for(j = 1; j <= space; j++) 
		   {
            printf(" ");
           }
        for(j = 1; j <= i; j++) 
		{
            printf("%d", num);
            num++;
        }
        num -= 2;
        for(j = 1; j < i; j++) 
		{
            printf("%d", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}


//int main() {
//    int n, i, isPrime = 1;
//    
//    // get the number from the user
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//
//    // check if the number is prime
//    for (i = 2; i <= n / 2; i++) {
//        if (n % i == 0) {
//            isPrime = 0;
//            break;
//        }
//    }

    // print the result
//    if (isPrime)
//        printf("%d is a prime number.", n);
//    else
//        printf("%d is not a prime number.", n);
//
//    return 0;
//}


//int main()
//    {
//        int a=1,b=2;
//        printf("\n%d",a!=b);
//        return 0;
//    }



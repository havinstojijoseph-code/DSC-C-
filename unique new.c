//Havins toji
//Department of biotechnology
#include <stdio.h>

void main()
{
    float a, b, c, d, m, n;
    float x1, x2, den;

    printf("Enter\na:\nb:\nc:\nd:\nm:\nn:\n");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &m, &n);
    den = a*d - c*b;
    if (den != 0)
    {
        x1 =(m*d-b*n)/den;
        x2 =(a*n-m*c)/den;
        
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else
    {
        printf("invalid denominator\n");
    }

}
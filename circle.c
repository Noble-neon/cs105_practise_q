#include<stdio.h>

int main(void) {
    float r;
    float pi = 3.14159;
    scanf("%f", &r);
    float area = r * pi * pi;
    float circumference =  2 * pi * r;
    printf("%f\n", area);
    printf("%f\n", circumference);
    return 0;
}

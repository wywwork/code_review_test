

#include <stdio.h>

double dev(double x, double y) {
    if (y == 0)
        return 0;
    return x/y;
}

int main() {    
    printf("Hello, World!\n");

    int a = 5;
    int b = 2;
    double c = dev(a,b);
    printf("%f\n", c);
}



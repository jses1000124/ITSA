#include <stdio.h>

int main() {
    double celsius;
    double fahrenheit;
    scanf("%lf", &celsius);
    fahrenheit = celsius * (9.0/5.0) + 32;
    printf("%.1f\n", fahrenheit);
    
    return 0;
}
#include <stdio.h>

int main() {
    double T, B, H;
    double area;
    
    scanf("%lf %lf %lf", &T, &B, &H);
    printf("Trapezoid area:%.1lf\n", ((T + B) * H) / 2);
    return 0;
}
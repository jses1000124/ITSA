#include <stdio.h>

int main() {
    int weight, height;
    double bmi;
    double height_m;
    scanf("%d %d", &weight, &height);
    height_m = height / 100.0;
    bmi = weight / (height_m * height_m);
    printf("%.2f\n", bmi);
    
    return 0;
}
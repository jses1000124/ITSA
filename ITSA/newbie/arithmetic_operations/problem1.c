#include <stdio.h>

int main(){
    double base, height;
    scanf("%lf %lf", &base, &height);
    printf("Triangle area:%.1lf\n", height*base/2);
    return 0;
}
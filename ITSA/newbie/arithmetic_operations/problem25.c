#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double distance;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    
    distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.2f\n", distance);
    
    return 0;
}
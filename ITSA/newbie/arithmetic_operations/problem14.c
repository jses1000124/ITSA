#include <stdio.h>
#include <math.h>

int main() {
    int distance;
    scanf("%d", &distance);
    double their_speed = 30 * 0.0254;
    double relative_speed = 1 - their_speed;
    double time = distance / relative_speed;
    int result = (int)ceil(time);
    printf("%d\n", result);
    
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    double W;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%lf", &W);
        printf("%.1lf\n", (int)((W * W) * 10 + 0.5) / 10.0);
    }
    
    return 0;
}
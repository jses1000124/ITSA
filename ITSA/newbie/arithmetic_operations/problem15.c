#include <stdio.h>

int main() {
    int minutes;
    double fee;
    scanf("%d", &minutes);
    if (minutes <= 800) {
        fee = minutes * 0.9;
    }
    else if (minutes < 1500 && minutes > 800) {
        fee = minutes * 0.9 * 0.9;
    }
    else {
        fee = minutes * 0.9 * 0.79;
    }
    printf("%.1f\n", fee);
    
    return 0;
}
#include <stdio.h>

int main() {
    int miles;
    double kilometers;
    
    scanf("%d", &miles);
    
    kilometers = miles * 1.6;
    
    printf("km=%.1f\n", kilometers);
    
    return 0;
}
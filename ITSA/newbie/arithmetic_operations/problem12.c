#include <stdio.h>

int main() {
    int N;
    int coins10 = 0;
    int coins5 = 0;
    int coins1 = 0; 
    scanf("%d", &N);
    coins10 = N / 10;
    N = N % 10;
    coins5 = N / 5;
    N = N % 5;
    coins1 = N;
    printf("NT10=%d\n", coins10);
    printf("NT5=%d\n", coins5);
    printf("NT1=%d\n", coins1);
    
    return 0;
}
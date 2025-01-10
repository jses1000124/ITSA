#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N > 0) {
        printf("正數\n");
    } else if (N < 0) {
        printf("負數\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
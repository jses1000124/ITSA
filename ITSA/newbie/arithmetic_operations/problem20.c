#include <stdio.h>
#include <stdbool.h>

// 判斷是否為質數的函數
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);
    // 從 N 開始向下找最大質數
    for (int i = N - 1; i >= 2; i--) {
        if (isPrime(i)) {
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
}

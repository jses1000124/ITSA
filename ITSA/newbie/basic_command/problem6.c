#include <stdio.h>

int main() {
    int m, n;
    
    // 讀取輸入的兩個整數
    scanf("%d %d", &m, &n);
    
    // 檢查輸入範圍是否合法 (1 ≤ m,n ≤ 10)
    if (m < 1 || m > 10 || n < 1 || n > 10) {
        return 1;
    }
    
    // 使用巢狀迴圈畫出矩形
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("*");
        }
        printf("\n");    // 每行結束換行
    }
    
    return 0;
}
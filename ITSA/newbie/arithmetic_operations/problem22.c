#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // 使用unsigned char來確保是8位元
    unsigned char binary = (unsigned char)num;
    
    // 從最高位開始，一位一位印出
    for(int i = 7; i >= 0; i--) {
        printf("%d", (binary >> i) & 1);
    }
    printf("\n");
    
    return 0;
}
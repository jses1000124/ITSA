#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // 取得每個位數的數字並輸出對應星號
    int digit;
    
    // 取得萬位數
    digit = num / 10000;
    for(int i = 0; i < digit; i++) {
        printf("*");
    }
    printf("\n");
    
    // 取得千位數
    digit = (num / 1000) % 10;
    for(int i = 0; i < digit; i++) {
        printf("*");
    }
    printf("\n");
    
    // 取得百位數
    digit = (num / 100) % 10;
    for(int i = 0; i < digit; i++) {
        printf("*");
    }
    printf("\n");
    
    // 取得十位數
    digit = (num / 10) % 10;
    for(int i = 0; i < digit; i++) {
        printf("*");
    }
    printf("\n");
    
    // 取得個位數
    digit = num % 10;
    for(int i = 0; i < digit; i++) {
        printf("*");
    }
    printf("\n");
    
    return 0;
}
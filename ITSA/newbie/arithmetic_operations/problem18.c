#include <stdio.h>

int main() {
    int seconds;
    scanf("%d", &seconds);
    
    // 計算天數
    int days = seconds / (24 * 60 * 60);
    seconds = seconds % (24 * 60 * 60);
    
    // 計算小時
    int hours = seconds / (60 * 60);
    seconds = seconds % (60 * 60);
    
    // 計算分鐘
    int minutes = seconds / 60;
    seconds = seconds % 60;

    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);
    
    return 0;
}
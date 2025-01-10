#include <stdio.h>

double calculateSalary(int hours, int rate) {
    double salary = 0.0;
    
    // 計算前60小時的基本工資
    if (hours <= 60) {
        salary = hours * rate;
    } else {
        salary = 60 * rate;
        
        // 計算61-120小時的工資 (1.33倍)
        if (hours <= 120) {
            salary += (hours - 60) * rate * 1.33;
        } else {
            salary += 60 * rate * 1.33;  // 第一階段加班費 (61-120小時)
            
            // 計算超過120小時的工資 (1.66倍)
            salary += (hours - 120) * rate * 1.66;
        }
    }
    
    return salary;
}

int main() {
    int hours, rate;
    
    // 輸入工時和時薪
    scanf("%d %d", &hours, &rate);
    
    // 計算並輸出薪資（取到小數點後第一位）
    double result = calculateSalary(hours, rate);
    printf("%.1f\n", result);
    
    return 0;
}
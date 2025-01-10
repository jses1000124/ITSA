#include <stdio.h>

int calculateMinutes(int startHour, int startMin, int endHour, int endMin) {
    int totalMinutes;
    
    // 如果結束時間小於開始時間，表示跨日，需加24小時
    if (endHour < startHour || (endHour == startHour && endMin < startMin)) {
        endHour += 24;
    }
    
    totalMinutes = (endHour - startHour) * 60 + (endMin - startMin);
    return totalMinutes;
}

int calculateFee(int minutes) {
    int halfHours = minutes / 30; // 計算半小時數（未滿半小時不計費）
    int fee = 0;
    
    if (halfHours <= 0) return 0;
    
    // 計算前2小時的費用（4個半小時）
    if (halfHours <= 4) {
        fee = halfHours * 30;
        return fee;
    }
    
    fee = 4 * 30; // 前2小時費用
    halfHours -= 4;
    
    // 計算2-4小時的費用（4個半小時）
    if (halfHours <= 4) {
        fee += halfHours * 40;
        return fee;
    }
    
    fee += 4 * 40; // 2-4小時費用
    halfHours -= 4;
    
    // 計算4小時以上的費用
    fee += halfHours * 60;
    
    return fee;
}

int main() {
    int startHour, startMin, endHour, endMin;
    
    // 讀取輸入
    scanf("%d %d", &startHour, &startMin);
    scanf("%d %d", &endHour, &endMin);
    
    // 計算總分鐘數
    int totalMinutes = calculateMinutes(startHour, startMin, endHour, endMin);
    
    // 計算並輸出費用
    int fee = calculateFee(totalMinutes);
    printf("%d\n", fee);
    
    return 0;
}
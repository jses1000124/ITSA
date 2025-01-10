#include <stdio.h>

// 計算兩數之間所有整數的總和
long long calculateSum(int x, int y) {
    // 確保 x 是較小的數
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    // 使用等差數列公式計算總和
    // sum = n(a1 + an)/2，其中 n 是數字個數，a1 是第一項，an 是最後一項
    long long count = (long long)(y - x + 1);
    long long sum = count * (x + y) / 2;
    
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%lld\n", calculateSum(x, y));
    }
    
    return 0;
}
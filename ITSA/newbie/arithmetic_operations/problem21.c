#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    
    // 讀取輸入
    scanf("%d", &N);
    
    // 尋找符合條件的數字並加總
    // 從6開始，因為6是第一個能被2和3整除的數
    // 每次加6，因為符合條件的數必定是6的倍數
    for(int i = 6; i <= N; i += 6) {
        // 檢查是否能被12整除
        // 如果不能被12整除，就加入總和
        if(i % 12 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
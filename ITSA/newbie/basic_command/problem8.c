#include <stdio.h>

// 定義每個數字的LED顯示圖案
const char* number_patterns[10][5] = {
    // 0
    {
        "*****",
        "*   *",
        "*   *",
        "*   *",
        "*****"
    },
    // 1
    {
        "    *",
        "    *",
        "    *",
        "    *",
        "    *"
    },
    // 2
    {
        "*****",
        "    *",
        "*****",
        "*    ",
        "*****"
    },
    // 3
    {
        "*****",
        "    *",
        "*****",
        "    *",
        "*****"
    },
    // 4
    {
        "*   *",
        "*   *",
        "*****",
        "    *",
        "    *"
    },
    // 5
    {
        "*****",
        "*    ",
        "*****",
        "    *",
        "*****"
    },
    // 6
    {
        "*    ",
        "*    ",
        "*****",
        "*   *",
        "*****"
    },
    // 7
    {
        "*****",
        "    *",
        "    *",
        "    *",
        "    *"
    },
    // 8
    {
        "*****",
        "*   *",
        "*****",
        "*   *",
        "*****"
    },
    // 9
    {
        "*****",
        "*   *",
        "*****",
        "    *",
        "*****"
    }
};

int main() {
    int num;
    
    // 讀取輸入的數字
    scanf("%d", &num);
    
    // 檢查輸入是否在有效範圍內
    if (num < 0 || num > 9) {
        return 1;
    }
    
    // 輸出LED顯示圖案
    for (int i = 0; i < 5; i++) {
        printf("%s\n", number_patterns[num][i]);
    }
    
    return 0;
}
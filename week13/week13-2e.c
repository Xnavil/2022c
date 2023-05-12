#include <stdio.h>

int main() {
    int arr[10];
    int n, target;
    int count = 0;

    // 讀入數列
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n == 0) break;
        arr[i] = n;
    }

    // 讀入目標數字
    scanf("%d", &target);

    // 計算目標數字出現次數
    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) count++;
    }

    printf("%d\n", count);
    return 0;
}

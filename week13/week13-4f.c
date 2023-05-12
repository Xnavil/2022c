#include <stdio.h>

int main() {
    int n, i;
    int vec1[10], vec2[10], sum[10];

    scanf("%d", &n);

    // 讀入第一個向量
    for (i = 0; i < n; i++) {
        scanf("%d", &vec1[i]);
    }

    // 讀入第二個向量
    for (i = 0; i < n; i++) {
        scanf("%d", &vec2[i]);
    }

    // 計算兩個向量的和
    for (i = 0; i < n; i++) {
        sum[i] = vec1[i] + vec2[i];
    }

    // 輸出結果
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

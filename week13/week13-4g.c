#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        scanf("%d", &num); // 讀取輸入的整數
        if (num > 0) { // 只加總正整數
            sum += num; // 累加總和
        }
    } while (num != 0); // 輸入0為結束條件

    printf("%d", sum); // 輸出總和

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void Func(int arr[], int n) {
    // 盢俱计皚パ逼
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 程籔程
    printf("[%d,%d]", arr[0], arr[n-1]);
}

int main() {
    int arr[100]; // 安砞程Τ100俱计
    int n = 0;
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == 0) break;
        arr[n++] = num;
    }
    Func(arr, n);
    return 0;
}

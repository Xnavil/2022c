#include <stdio.h>

int main() {
    int arr[10];
    int n, target;
    int count = 0;

    // Ū�J�ƦC
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n == 0) break;
        arr[i] = n;
    }

    // Ū�J�ؼмƦr
    scanf("%d", &target);

    // �p��ؼмƦr�X�{����
    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) count++;
    }

    printf("%d\n", count);
    return 0;
}

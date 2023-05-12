#include <stdio.h>

int main(void) {
    int n, arr[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr[i] *= arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
    return 0;
}

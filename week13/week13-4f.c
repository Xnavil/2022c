#include <stdio.h>

int main() {
    int n, i;
    int vec1[10], vec2[10], sum[10];

    scanf("%d", &n);

    // Ū�J�Ĥ@�ӦV�q
    for (i = 0; i < n; i++) {
        scanf("%d", &vec1[i]);
    }

    // Ū�J�ĤG�ӦV�q
    for (i = 0; i < n; i++) {
        scanf("%d", &vec2[i]);
    }

    // �p���ӦV�q���M
    for (i = 0; i < n; i++) {
        sum[i] = vec1[i] + vec2[i];
    }

    // ��X���G
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

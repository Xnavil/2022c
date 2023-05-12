#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}

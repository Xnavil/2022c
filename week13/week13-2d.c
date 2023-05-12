#include <stdio.h>

int main(void) {
    char binary[5];
    scanf("%s", binary);
    int decimal = 0;
    for (int i = 0; i < 4; i++) {
        decimal += (binary[i] - '0') * (1 << (3 - i));
    }
    printf("%d\n", decimal);
    return 0;
}

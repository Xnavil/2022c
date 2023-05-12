#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2, area;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    // ­pºâ­±¿n
    area = abs(x2 - x1) * abs(y2 - y1);

    printf("%d", area);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int n, m, cups;
    scanf("%d%d", &n, &m);
    cups = ceil((double)n / m);
    printf("%d", cups);
    return 0;
}

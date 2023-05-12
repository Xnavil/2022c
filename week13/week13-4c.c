#include <stdio.h>
#include <math.h>

int main() {
    int seconds;
    double speed;
    scanf("%d", &seconds);

    speed = 60*60*1.2/seconds;
    printf("%d", (int)floor(speed));
    return 0;
}

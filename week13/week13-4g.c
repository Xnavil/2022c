#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        scanf("%d", &num); // Ū����J�����
        if (num > 0) { // �u�[�`�����
            sum += num; // �֥[�`�M
        }
    } while (num != 0); // ��J0����������

    printf("%d", sum); // ��X�`�M

    return 0;
}

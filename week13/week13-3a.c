#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // ���N�Ʀr���H1000���o�d��ƫ�A�A���l�Ʊo��d��ƪ��Ʀr
    int thousand = (num / 1000) % 10;

    printf("%d", thousand);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void Func(int arr[], int n) {
    // �N��ư}�C�Ѥp��j�Ƨ�
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // �L�X�̤p�ȻP�̤j��
    printf("[%d,%d]", arr[0], arr[n-1]);
}

int main() {
    int arr[100]; // ���]�̦h��100�Ӿ��
    int n = 0;
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == 0) break;
        arr[n++] = num;
    }
    Func(arr, n);
    return 0;
}

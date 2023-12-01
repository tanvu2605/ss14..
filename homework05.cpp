#include <stdio.h>
void selectionSort(int *arr, int size) {
    int i, j, *min;
    for (i = 0; i < size - 1; i++) {
        min = &arr[i];
        for (j = i + 1; j < size; j++) {
            if (arr[j] < *min) {
                min = &arr[j];
            }
        }
        int temp = *min;
        *min = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int arr[100];
    int size;
    printf("Nhap vao kich thuoc cua mang: ");
    scanf("%d", &size);
    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nMang truoc khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, size);
    printf("\nMang sau khi sap xep tang dan: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

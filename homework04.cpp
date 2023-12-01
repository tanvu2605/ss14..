#include<stdio.h>
#include<stdlib.h>

void reverseArray(int num[], int size) {
	int start = 0;
	int end = size - 1;
	while (start < end) {
		int temp = num[start];
		num[start] = num[end];
		num[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < size; i++) {
		printf("number[%d] = %d\n", i, num[i]);
	}
}

int search(int num[], int Value, int size) {
	for (int i = 0; i < size; i++) {
		if (num[i] == Value) {
			printf("Gia tri can tim nam o vi tri %d cua mang\n", i);
		}
	}
}

int main() {
	do {
		printf("MENU\n");
		printf("1. Nhap vao mang\n");
		printf("2. In ra mang\n");
		printf("3. Sao chep mang vao 1 mang khac\n");
		printf("4. Nhap vao mang khac, doi cho 2 mang cho nhau\n");
		printf("5. Dao nguoc mang\n");
		printf("6. Tim kiem ky tu trong mang\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		int n = 0, m = 0, nowValue1 = 0, nowValue = 0;
		int *copy, searchValue;
		int num[100], newNum[100], number[100]; 

		switch (choice) {
			case 1:
				printf("Nhap vao so phan tu muon nhap: ");
				scanf("%d", &n);
				nowValue += n;
				for (int i = nowValue - n; i < nowValue; i++) {
					printf("Number[%d] = ", i);
					scanf("%d", &num[i]);
				}
				break;
			case 2:
				if (nowValue > 0) {
					for (int i = 0; i < nowValue; i++) {
						printf("Number[%d] = %d\n", i, num[i]);
					}
				} else {
					printf("Mang chua co phan tu\n");
				}
				break;
			case 3:
				for (int i = 0; i < nowValue; i++) {
					newNum[i] = num[i];
				}
				break;
			case 4:
				printf("Nhap vao so phan tu muon nhap: ");
				scanf("%d", &m);
				nowValue1 += m;
				for (int i = nowValue1 - m; i < nowValue1; i++) {
					printf("Number[%d] = ", i);
					scanf("%d", &number[i]);
				}
				if (nowValue == nowValue1) {
					for (int i = 0; i < nowValue; i++) {
						int temp = num[i];
						num[i] = number[i];
						number[i] = temp;
					}
				}
				break;
			case 5:
				reverseArray(num, nowValue);
				break;
			case 6:
				printf("Nhap vao gia tri can tim: ");
				scanf("%d", &searchValue);
				search(num, searchValue, nowValue);
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Lua chon khong hop le\n");
		}
	} while (1);
	return 0;
}

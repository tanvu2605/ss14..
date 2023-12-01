#include<stdio.h>
int main(){
	int number;
	printf("Nhap vao gia tri: ");
	scanf("%d",&number);
	int *ptr=&number;
	printf("So vua nhap la: %d\n",number);
	printf("Dia chi cua bien co gia tri la: %d\n",*ptr);
}

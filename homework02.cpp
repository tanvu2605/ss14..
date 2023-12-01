#include<stdio.h>
int hieu(int *a,int *b){
	int hieu=*a-*b;
	return hieu;
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int numb1,numb2;
	printf("Nhap 2 so nguyen: ");
	scanf("%d %d",&numb1,&numb2);
	int *ptr1=&numb1;
	int *ptr2=&numb2;
	int hieu1=hieu(ptr1,ptr2);
	swap(ptr1,ptr2);
	int hieu2=hieu(ptr1,ptr2);
	printf("Hieu ban dau: %d\n",hieu1);
	printf("Hieu luc sau: %d\n",hieu2);
}

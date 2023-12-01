#include<stdio.h>
void sosanh(int *a,int *b){
	if(*a>*b){
		printf("%d > %d\n",*a,*b);
	}else{
		printf("%d > %d\n",*b,*a);
	}
}
int main(){
	  int n,m;
	  printf("Nhap do dai chuoi 1 va chuoi 2: ");
	  scanf("%d %d",&n,&m);
	  int number[n],numbers[m];
	  int *ptr1=&n;
	  int *ptr2=&m;
	  printf("Do dai chuoi 1 la: %d\n",*ptr1);
	  printf("Do dai chuoi 2 la: %d\n",*ptr2);
	  sosanh(ptr1,ptr2);
	  return 0;
}

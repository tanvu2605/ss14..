#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void printfMenu(){
	printf("\nMENU\n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi\n");
    printf("3. Sao chep chuoi vao mot chuoi khac\n");
    printf("4. Them chuoi khac vao chuoi ban dau\n");
    printf("5. So sanh chuoi khac voi chuoi ban dau\n");
    printf("6. In ra chuoi dao nguoc\n");
    printf("7. Thoat\n");
    printf("Lua chon cua ban: ");
}
void nhapChuoi(char *chuoi){
	printf("Nhap vao chuoi: ");
	scanf("%s",chuoi);
}
void inChuoi(char *chuoi){
	printf("Chuoi: %s\n",chuoi);
}
void saoChep(char *chuoi,char *chuoiSaoChep){
	strcpy(chuoiSaoChep,chuoi);
	printf("Da sao chep\n");
}
void themChuoi(char *chuoi,char *chuoiThem){
	strcat(chuoi,chuoiThem);
	printf("Chuoi sau khi them: %s",chuoi);
}
int soSanh(char *chuoi,char *chuoiMoi){
	int ketqua = strcmp(chuoi,chuoiMoi);
	if(ketqua==0){
		printf("Hai chuoi bang nhau");
	}else if(ketqua<0){
		printf("Chuoi ban dau nho hon chuoi moi");
	}else{
		printf("Chuoi ban dau lon hon chuoi moi");
	}
	return ketqua;
}
void daoChuoi(char *chuoi){
	int length=strlen(chuoi);
	printf("Dao nguoc chuoi: ");
	for(int i=length;i>=0;i--){
		printf("%c",chuoi[i]);
	}
	printf("\n");
}
int main(){
	char string[100];
	char addString[100];
	int choice;
	char copyString[100];
	char newString[100];
	do{
		printfMenu();
		scanf("%d",&choice);
		switch(choice){
			case 1:
				nhapChuoi(string);
				break;
			case 2:
				inChuoi(string);
				break;
			case 3:
				saoChep(string,copyString);
				break;
			case 4:
				printf("Nhap vao chuoi muon them: ");
				scanf("%s",&addString);
				themChuoi(string,addString);
				break;
			case 5:
				printf("Nhap vao mot chuoi: ");
				scanf("%s",&newString);
				soSanh(string,newString);
				break;
			case 6:
				daoChuoi(string);
				break;
			case 7:
				exit(0);
		}
	}while(1==1);
}

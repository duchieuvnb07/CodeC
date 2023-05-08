#include<stdio.h>
int main(){
	//Bài 1: Nhap vào 3 so nguyên a, b, c. Trong tong, hieu, tích, thuong cua 3 so. Tính (a + b) * c và in ra màn hình. Tao menu cho các yêu cau trên
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d",&a);
	printf("Nhap vao so b:");
	scanf("%d",&b);
	int tong,hieu,tich;
	float thuong;
	tong =a+b;
	hieu =a-b;
	tich =a*b;
	thuong = (float)a/b;
	char hiSinh;
	char luaChon;
	printf("Moi chon phep tinh:");
	scanf("%c",&hiSinh);
	scanf("%c",&luaChon);
	switch(luaChon){
		case '+':
			printf("/ntong 2 so la %d",tong);
			break;
		case '-':
		    printf("hieu 2 so la %d",hieu);
			break;	
		case '*':
		    printf("tich 2 so la %d",tich);
			break;
		case '/':
		    printf("thuong 2 so la %d",thuong);
			break;			
	}
	printf("tong cua 2 so a vs b la: %d\n", tong);
	printf("hieu cua 2 so a vs b la: %d\n", hieu);
	printf("tich cua 2 so a vs b la: %d\n", tich);
	printf("thuong cua 2 so a vs b la: %f\n", thuong);
}

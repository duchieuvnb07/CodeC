#include<stdio.h>
int main(){
	//B�i 1: Nhap v�o 3 so nguy�n a, b, c. Trong tong, hieu, t�ch, thuong cua 3 so. T�nh (a + b) * c v� in ra m�n h�nh. Tao menu cho c�c y�u cau tr�n
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

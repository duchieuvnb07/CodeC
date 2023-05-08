#include <stdio.h>
 int main(){
 	struct phanso{
 		int tu;
 		int mau;

 	int a,b;
    
 	printf("Nhap a: \n");
 	scanf("%d",&a);
 	printf("Nhap b: \n");
 	scanf("%d",&b);
 	
 	int tong = a+b;
 	int hieu = a-b;
 	int tich = a*b;
    float thuong = (float)a /  b;
 
 	printf("\ntong 2 so la: %d",tong );
 	printf("\nhieu 2 so la: %d",hieu);
 	printf("\ntich 2 so la: %d",tich);
 	printf("\nthuong 2 so la %.1f",thuong);

 
 	return 0;
 }

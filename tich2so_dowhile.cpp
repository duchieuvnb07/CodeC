#include <stdio.h>

int main(){
	float a,b,tich;
	do{
		printf("Nhap so a:\n");
		scanf("%f",&a);
		printf("Nhap so b:");
		scanf("%f", &b);		 
		 if((a*b)>100){
		 	printf("tich cua a*b = %2.f", a*b);
		 }else{
		    printf("xin moi nhap lai \n");
		 }
	}while((a*b)<=100);
}

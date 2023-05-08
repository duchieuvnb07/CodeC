#include <stdio.h>
 
 int main(){
 	int tien1;
	int tien2;
 	printf("xin moi nhap so tien trong the : ");
 	scanf("%d",&tien1);
 	int check;
 	 if (tien1 < 50000){
 	 	printf("so tien trong the chi du duy tri tai khoan, khong the tuong tac.");
	  }
	  
	  if (tien1 > 50000){
	  	printf("xin moi nhap so tien can rut : ");
	  }
	  scanf("%d",&tien2);
	 int ruttien; {
	 if (tien2 > tien1){
	  	printf("khong the rut tien.");
	  }
	  
	  else if (tien2 < tien1){
	  	printf("so tien rut: %d",tien2);
	  }
	  if (tien1 < 50000){
 	 	printf("so tien trong the chi du duy tri tai khoan, khong the tuong tac.");
	  }
	  else{
	  	int sodutaikhoan = tien1 - tien2;
	  printf("%tien2", &tien2);
	  printf("%tien1",&tien1);
 }
	  }
	  
	 	  
	  return 0;
	  
	  
	  

 }


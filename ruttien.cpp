#include<stdio.h>
int main(){
 printf("Xin moi nhap so tien co trong the:\n");
 int sotien;
 scanf("%d", &sotien);
 if(sotien < 50000){
  printf("So tien trong the chi du duy tri tai khoan, khong the tuong tac.\n");
 }
 if(sotien >= 50000){
 }
 else {
  printf("Xin moi nhap so tien can rut:\n");
  int sotiencanrut;
  scanf("%d", &sotiencanrut);
  if(sotiencanrut > sotien){
   printf(" khong the rut tien\n");
   
  }
  else{
   int sodutaikhoan = sotien - sotiencanrut;
   printf("sotiencanrut", &sotiencanrut);
   printf("sodutaikhoan", &sodutaikhoan);
  }
 }
 return 0;
}

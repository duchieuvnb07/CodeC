#include<stdio.h>
void bai1(){
	char ten[20];
	int nguoi,thuNhap;
	printf("\nNhap ten:");
	scanf("%s",&ten);
	printf("So nguoi trong gia dinh:");
    scanf("%d",&nguoi);
    printf("Thu nhap hang thang:");
    scanf("%d",&thuNhap);
    printf("So nguoi phu thuoc:");
    scanf("%d",&nguoi);

} 
void bai2(){
	
 int diem;
     printf("\nxin moi nhap so diem tu tin hut pod cua ban(A>=9;5<B<9;c<=5):");
     scanf("%d",&diem);
     if (diem<=5){
      printf("Kem\n");
     }
     if (diem>5 && diem<9){
      printf("Kha\n");
     }if (diem>=9){
      printf("Gioi\n");
     }
}
void bai3(){
	
}
int main(){
  int luaChon;
 
  
	printf(" ------------menu------------");
	printf("\n1.Thong tin ca nhan\n");
	printf("2. Xep loai trinh do hut pod\n");
	printf("3. Thong tin dien thoai\n");
	printf("0. Thoat\n");
	printf("------------------------"); 
 do{
	printf("\n Moi chon: ");
	scanf("%d",&luaChon);
	
	switch(luaChon){
		case 1:
			printf("Thong tin ca nhan");
			bai1(); 
			break;
		case 2:
		    printf("Xep loai trinh do hut pod");
		    bai2();
		    break;
		case 3: 
		    printf("Thong tin dien thoai"); 
		    
		    break;
   }
}while(luaChon=4);
return luaChon;
}

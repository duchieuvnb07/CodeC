
#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap canh a:");
	scanf("%d",&a);
	printf("Nhap canh b:");
	scanf("%d",&b);
	//boolean 
	// ==, !=, >=, <=
	if(a == b){
		printf("Dien tich hinh vuong la: %d",(a*b));
	}else{
		printf("Dien tich hinh chu nhat la: %d",(a*b));
	}
//   if(a!=b){
//   	printf("Dien tich hinh chu nhat la: %d",(a*b));
//   }

////---------bai khac
// CTRL + / comment code nhanh
//   float diemToan,diemVan,diemAnh;
//   printf("Nhap diem toan: ");
//   scanf("%f",&diemToan);
//   printf("Nhap diem van: ");
//   scanf("%f",&diemVan);
//   printf("Nhap diem anh: ");
//   scanf("%f",&diemAnh);
//   float diemTrungBinh = (diemToan + diemVan + diemAnh)/3;
//   printf("Diem trung binh toan van anh:\t %.3f",diemTrungBinh); //%.3f lay sau so 0 3 so. \t cach ra 1 khoang trang
   
////   	float diemtoan, diemvan, diemanh, diemtb;
////	printf("Xin moi nhap diem toan: ");
////	scanf("%f",&diemtoan);
////	printf("Xin moi nhap diem van: ");
////	scanf("%f",&diemvan);
////	printf("Xin moi nhap diem anh: ");
////	scanf("%f",&diemanh);
////	diemtb = (diemtoan + diemvan+ diemanh)/3;
////	printf("Diem trung binh la: %.1f",diemtb); 
////	if(diemtb>=0&&diemtb<=4){
////		printf("\n Xep loai yeu"); 
////	}else if(diemtb>4 &&diemtb<6){
////		printf("\n xep loai trung binh"); 
////	}else if(diemtb<8){
////		printf("\n xep loai kha"); 
////	}else if(diemtb<=10){
////		printf("\n xep loai gioi"); 
////	} 
////	return 0;
//   
}


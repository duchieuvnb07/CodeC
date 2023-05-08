#include<stdio.h>
void bai1(){
	char abc[1],abcd[1];
		    char hoTen[50];
		    char cuoi[10];
		    int namSinh,namYeuNhau;
		    printf("\nNhap ten nguoi yeu cua ban:");
		    gets(abc);
		    gets(hoTen);
		    printf("Nhap Nam Sinh ny:");
		    scanf("%d",&namSinh);
		    printf("Nhap so nam yeu nhau:");
		    scanf("%d",&namYeuNhau);
		    printf("Co cuoi khong? >> co || khong: ");
		    gets(abcd);
		    gets(cuoi);
			
			printf("+------------------------------+\n");	
			printf("+     Ten NY:");
			puts(hoTen);
			printf("+     Tuoi NY: %d               \n",2023-namSinh);
			printf("+     So nam yeu nhau: %d       \n",namYeuNhau);	
			printf("+     Co cuoi khong: %s         \n",cuoi);   
}
int main(){
	printf("+---------------MENU---------------+\n");
	printf("+       1. Thong tin nguoi yeu     +\n");
	printf("+       2. Tim so chia het cho 3   +\n");
	printf("+       3. Thong tin thuoc         +\n");
	printf("+       4. Thoat                   +\n");
	printf("+----------------------------------+\n");
	int luaChon;
	do{
	printf("\nXin moi chon: ");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:{
		    printf("Thong tin nguoi yeu");
		     bai1();
			break;
		}
		case 2:{
			int n;
			printf("Nhap n:");
			scanf("%d",&n);
		    printf("cac so chia het cho 3 la: " );
			 for(int i = 0;i<n;i++){
			 	if(i%3==0){
			 		printf("%d \t",i);
				 }
			 }
			break;
	}
		case 3:{
			break;
		}
		case 4:{
			printf("Thoat");
			return 4;
			break;
			
		}
	}
}while(luaChon!=4);

}

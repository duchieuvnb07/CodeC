#include<stdio.h>
int main(){
	int chonSo;
	do{
	
	printf("+------------MENU-----------------+\n");
	printf("+   1. Thong tin nguoi yeu cu     +\n ");
	printf("+   2. Tong cac so le tu 1 den n  +\n ");
	printf("+   3. Thong tin vaccine          +\n   ");
	printf("+-------------------------------+\n");
	printf("Nhap lua chon: ");
	scanf("%d",&chonSo);
	switch(chonSo){
	    case 1:
	    	char abc[1];
	    	char hoTen[100];
	    	int namSinh;
	    	float canNang;
	    	printf("Moi nhap ten nyc: ");
	    	gets(abc);
	    	gets(hoTen);
	    	printf("Moi ban nhap nam sinh nyc: ");
	    	scanf("%d",&namSinh);
	    	printf("Moi ban nhap can nang nyc: ");
	    	scanf("%f",&canNang);
	    	printf("+-----------NYC----------+\n");
	    	printf("+      Ho va ten: ");
	    	puts(hoTen);
	    	printf("+      Nam sinh: %d\n",namSinh);
	    	printf("+      Can nang: %0.1f\n ",canNang);
	    	printf("+      Tuoi:%d                         \n",2023-namSinh);
	    	printf("+--------------------------------------+\n");
			break;	
		
		case 2:{
			int n;
		    printf("Moi ban nhap vao so phan tu trong mang: ");
			scanf("%d",&n);
			int i;
			int mangSoNguyen[n];
			for(int i;i<n;i++){
			 printf("Moi ban nhap gia tri cho phan tu: ");
			 scanf("%d",&mangSoNguyen[i]);
		}
		int sum = 0;
		for(int i=0;i<n;i++){
			if(mangSoNguyen[i]%2==1){
				sum=sum+mangSoNguyen[i];
			}
		}
		printf("Tong cac so le trong mang la: %d\n",sum);
		//Binh thuong tim gia tri lon nhat:int max=mangSoNguyen[0];
		//
		
			int max=mangSoNguyen[0],vitri=0;
		for(int i = 0;i<n;i++){
			if(mangSoNguyen[i]%2==0 && mangSoNguyen[i]>max){
				
				vitri=i;
			}
		}
		printf("So chan lon nhat cua day la so %d\n",vitri+1);
		break;
		
		}
		case 3:{
			
	}
}
}
while(chonSo !=4);
}

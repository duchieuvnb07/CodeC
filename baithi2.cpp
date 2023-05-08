#include<stdio.h>
void bai2(int tuoi){
	if(tuoi > 0 && tuoi < 18){
		printf("Tuoi tre ");
	}else if(tuoi >=18 && tuoi <= 55){
		printf("Tuoi lao dong ");
	}else{
		printf("Tuoi gia ");
	}
}
 
int main(){
	 int luaChon;
	do{
	printf("\n+--------------------------Menu------------------------+\n");
	printf("+          1. Thong tin ca nhan                        +\n");
	printf("+          2. Xep loai nhan vien                       +\n");
    printf("+          3. Thong tin vat nuoi                       +\n");
    printf("+          0.Thoat                                     +\n");
    printf("+------------------------------------------------------+\n");
    printf("\nXin moi chon:");
    scanf("%d",&luaChon);
    switch(luaChon){
    	case 1:
    		printf("1. Thong tin ca nhan\n");
    		char abc[1]; 
    		char datNuoc[20];
			char thanhPho[20];
			char tenDuong[20];
			int soNha;
    		printf("Moi nhap ten dat nuoc: ");
    		gets(abc);
    		gets(datNuoc);
    		printf("Moi nhap ten thanh pho:");
    		gets(thanhPho);
    		printf("Moi nhap ten duong: ");
    		gets(tenDuong);
    		printf("Moi nhap so nha: ");
    		scanf("%d",&soNha);
    		printf("+--------------------+\n");
    		printf("+    Ten dat nuoc:   ");
    		puts(datNuoc);
    		printf("+    Ten thanh pho:  ");
    		puts(thanhPho);
    		printf("+    Ten duong :     ");
    		puts(tenDuong);
    		printf("+    So nha : %d \n",soNha);

    		break;
    	case 2:{
    		printf("2. Xep loai nhan vien\n");
    		int tuoi;
    		printf("Xin moi nhap tuoi: ");
    		scanf("%d",&tuoi);
			bai2(tuoi);
			break;
		}
		case 3:{
			int n;
			printf("\n+-------- Thong tin vat nuoi -------+\n");
			printf("Nhap so luong vat nuoi: ");
			scanf("%d",&n);
			int arr[n];
			for(int i=0;i<n;i++){
			    printf("Nhap can nang vat nuoi %d:",i+1);
		     	scanf("%d",&arr[i]);
		     }
			    printf("\nCo %d vat nuoi",n);
	    	for(int i=0;i<n;i++){
			    printf("\nCan nang con thu %d la :%d",i+1,arr[i]);
		}
		    int dem=1;
            float min=arr[0];
              for(int i=1;i<=n;i++){
              	if(min>arr[i]){
		          min=arr[i];
		         dem=i+1;
	           }
           }
              printf("\nVi tri vat nuoi co can nang nho nhat la: %d",dem);
		  
			break;
		}
		case 0:{
			printf("Thoat");
			return 0;
			break;
		}
			
}
}while(luaChon >= 4);
printf("Chon lai di\n");
}

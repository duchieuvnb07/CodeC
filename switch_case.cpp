#include <stdio.h>
int main(){
// switch case
	   /*Cong thuc
	         switch(<bien>){
	               case 1
	                   //thuc hien cau lenh 1
	                   break;
	                case 2
					   //thuc hien cau lenh 2
					   break;
					....
					case n
					   //thuc hien cau lenh n
					   break;
					default
					   //thuc hien cau lenh default
					   break;
		       }
       */ 
	int luachon;
		printf("hoc luc\n");
		printf("1. diem duoi 5: 0, 1, 2, 3, 4\n");
		printf("2. diem >= 5 va < 8: 5, 6, 7\n");
		printf("3. diem >= 8 va < 9: 8, 8.5\n");
		printf("4. diem 9 va 10\n");
		printf("Xin moi nhap lua chon: ");
		scanf("%d", &luachon);
		switch(luachon){
			case 1:
				printf("1. hoc luc yeu ");
				break;
			case 2:
				printf("1. hoc luc TBK ");
				break;
			case 3:
				printf("1. hoc luc Gioi ");
				break;
			case 4:
				printf("1. hoc luc Xuat Sac ");
				break;
			default:
				printf("lua chon ko hop le");
				break;
	    
		}
	
	  
	int diem;
	  printf("\nxin moi nhap diem: ");
	  scanf("%d",&diem);
	switch(diem){
		case 1:
			printf("Hoc sinh trung binh");
			break;
		case 2:
			printf("Hoc sinh trung binh");
			break;
		case 3:
			printf("Hoc sinh trung binh");
			break;
		case 4:
			printf("Hoc sinh trung binh");
			break;	
		case 5:
			printf("Hoc sinh trung binh");
			break;
		case 6:
			printf("Hoc sinh TBK");
			break;
		case 7:
			printf("Hoc sinh TBK");
			break;	
		case 8:
			printf("Hoc sinh TBK");
			break;
		case 9:
		    printf("Hoc sinh gioi");
			break;
		case 10:
		    printf("Hoc sinh xuat sac");
			break;
		default:
		    printf("chua xep loai duoc");
			break;		
	}
	return 0;
}

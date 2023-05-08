#include <stdio.h>
 
 int main(){
 	float diem;
 	printf("xin moi nhap diem: ");
	scanf("%f", &diem);
	
 	  if(diem < 5 && diem >=0){
	  	 printf("ban that la vkl.");	   
       }else if(diem >= 5 && diem <= 6){
	   	 printf("Hoc luc TBK");
	   }else if(diem > 6 && diem <=7){
	   	 printf("Hoc luc Kha");
	   }else if(diem > 7 && diem <=8){
	   	 printf("Hoc luc Gioi");
	   }
}
	   
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
//	int luachon;{
//		printf("hoc luc");	
//	printf("1.hoc luc yeu/n");
//	printf("2.hoc luc TBK/n");
//	printf("3.hoc luc kha/n");
//	printf("4.hoc luc gioi/n");
//	printf("xin moi nhap lua chon");
//	scanf("%d", luachon);
//	}
//	
//	switch(luachon){
//		case 1:
//			printf("1.hoc luc yeu");
//			break;
//		case 2:
//			printf("1.hoc luc TBK");
//			break;
//		case 3:
//			printf("1.hoc luc kha");
//			break;
//		case 4:
//			printf("1.hoc luc gioi");
//			break;	
//		default:
//			printf("lua chon khong hop le");
//			break;
//	}  
//	return 0;
//   	
//	   }
///////
//int luachon;
//		printf("hoc luc\n");
//		printf("1. hoc luc kem\n");
//		printf("2. hoc luc yeu\n");
//		printf("3. hoc luc TBK\n");
//		printf("4. hoc luc kha\n");
//		printf("5. hoc luc Gioi\n");
//		printf("6. hoc luc Xuat Sac\n");
//		printf("Xin moi nhap lua chon: ");
//		scanf("%d", &luachon);
//		switch(luachon){
//			case 1:
//				printf("1. diem < 3.5 ");
//				break;
//			case 2:
//				printf("1. diem < 5 va diem >= 3.5 ");
//				break;
//			case 3:
//				printf("1. diem < 6.5 va diem >= 5  ");
//				break;
//			case 4:
//				printf("1. diem < 8 va diem >=6.5 ");
//				break;
//			case 5:
//				printf("1. diem < 9 va diem >= 8 ");
//				break;
//			case 6:
//				printf("1. diem >=9 va diem == 10 ");
//				break;
//						
//			default:
//				printf("lua chon ko hop le");
//				break;
//	    
//		}




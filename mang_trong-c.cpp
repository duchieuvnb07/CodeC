#include<stdio.h>

// int tinhDienTichHCN(int dai, int rong){
//      
//      	int dienTichHCN = dai*rong;
//      	return dienTichHCN;
//	//mang trong c
//}
//int main(){
//    int dienTichHCN = 0;
//    int dai, rong;
//    printf("Nhap dai:");
//    scanf("%d",&dai);
//    printf("Nhap rong:");
//    scanf("%d",&rong);
//	  dienTichHCN = tinhDienTichHCN(dai,rong);
//      printf("%d",dienTichHCN);
//    
//	  }	
//	

void timSoNguyenTo(int so){
	  
		if(so <= 1){
		  printf("la so nguyen to\n", so);
		}else{
		    for(int i = 2; i <= (so/2);i ++){
		    	if(so%i== 0){
		    		printf(" khong phai so nguyen to");
		    		break;
				}
			} 
		    printf(" la  so nguyen to\n");
	     	}
}
int main(){
	timSoNguyenTo(4);
}

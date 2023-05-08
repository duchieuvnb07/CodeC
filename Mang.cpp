#include<stdio.h>

int main(){
	int soTN[]={9, 20, 12, 10, 4,11, 16, 17, 13};
	int luaChon;
    
    do {
    printf("--------Menu--------");
    printf("\n1.Tinh toan");
    printf("\n2. JACKPOT");
    printf("\n3. Sap xep");
    printf("\nNhap lua chon:");
    scanf("$d", &luaChon);
    switch(luaChon){
    	case 1: 
    	   printf("1.Tinh toan");
    	   break;
    	case 2: 
    	   printf("2. JACKPOT");
    	   break;
		case 3: 
    	   printf("3. Sap xep");
    	   break;
		default:
		   printf("Khong hop le xin lua chon lai");
		   break;         
	}
}while(luaChon< 3);
	
	
	return 0;
}


#include <stdio.h>

void menu(){
	do{
	
	int luaChon;
	
	printf("MENU NHA HANG\n");
	printf("1. Burger Ga\n");
	printf("2. Burger Tom\n");
	printf("3. Burger Bo\n");
	printf("4. Salad Nga\n");
	printf("5. Ket thuc mua hang\n");
	printf("Xin lua chon :");
	scanf("%d", &luaChon);
	
	switch(luaChon){
			case 1:
				printf("Burger Ga\n ");
				
				break;
			case 2:
				printf("Burger Tom\n");
				break;
			case 3:
				printf("Burger Bo\n ");
				
				break;
				
			case 4:
				printf("Salad Nga\n ");
				
				break;
			default:
				printf("Ket thuc mua hang\n");
				break;
		
	}
	
	
}



	
}		



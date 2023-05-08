#include <stdio.h>

int main(){
	int luachon;
	printf("1.CSGO\n");
	printf("2. fai fai\n");
	printf("xin moi nhap lua chon ");
	scanf("%d", &luachon);
	switch(luachon){
		case 1:
			int damage = 0;
			int hit = 0;
			 do{		
			      printf("1. ban vao dau\n");
			      printf("2. ban vao tay\n");
			      printf("3. ban vao nguoi\n");
			      scanf("%d", &luachon);
			         switch(luachon){
				           case 1:
					          damage = damage + 100;
					          hit++;
					          break;
				           case 2:
					          damage = damage + 20;
					          hit++;
					          break;
				           case 3:
					          damage = damage + 30;
					          hit++;
				           	  break;
			        	}
			 }while(damage < 100);
			        printf("%d hp in %d hit", damage, hit);
			        break;
	case 2:
			float damage2 = 0;
			float hit2 = 0;
			do{		
			printf("1. ban vao dau\n");
			printf("2. ban vao tay\n");
			printf("3. ban vao nguoi\n");
			scanf("%d", &luachon);
			switch(luachon){
				case 1:
					damage2 = damage2 + 130;
					hit2++;
					break;
				case 2:
					damage2 = damage2 + 50;
					hit2++;
					break;
				case 3:
					damage2 = damage2 + 90;
					hit2++;
					break;
				}
			}while(damage2 < 100);
			        printf("%d hp in %d hit", damage2, hit2);
			        break;
}
return 0;
}
	
	



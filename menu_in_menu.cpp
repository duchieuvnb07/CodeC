#include<stdio.h>
 int main(){
 	 int luaChon;
 	printf("menu nha hang\n");
 	printf("1. Shasimi\n");
 	printf("2. Com cuon\n");
 	printf("3. Buffer\n");
 	 
 	 
 	 printf("Xin moi chon:");
 	 scanf("%d", &luaChon);
 	 
 	 switch(luaChon){
 	 	case 1:
 	 	printf("1. ca hoi\n");
 	 	printf("2. ca ngu\n");
 	 	printf("3 . ca trich\n");
 	 	 int luaCHon1;
 	 	printf("Moi quy khach chon:");
 	 	scanf("%d", &luaCHon1);
 	 	 if (luaCHon1 == 1){ printf(" Ca Hoi");
		   }else if(luaCHon1 == 2){printf("Ca ngu");
		   }else{
		   	printf("Ca trich");
		   }
 	 	break;
 	 	 case 2:
 	 	 	printf("1. Com cuon ca hoi\n");
 	 	 	printf("2. com cuon tong hop\n");
 	 	 	printf("3. Com cuon luon nuong\n");
 	 	 	 int luaCHon2;
 	 	 	 scanf("%d", &luaCHon2);
 	 	  if(luaCHon2 == 1){printf("Com cuon ca hoi");
			}else if(luaCHon2 == 2){printf("Com cuon tong hop");
			}else{
				printf("Com cuon luon nuong");
			}
	  }
 	 
 	 return 0;
 }

#include <stdio.h>

int main(){
	//neu thi IF ELSE
	printf("nhin thay coc tien 500k ban se lam gi?\n");
	printf("1. nhat len\n");
	printf("2. de im\n");
	printf("ban se chon phuong an nao?\n");
	// cong thuc 
	
	
	int luaChon;
	scanf("%d", &luaChon);
	if (luaChon == 1)
	{
	printf("Tham lam");
	}
	else if(luaChon == 2) {
		printf("ngu dot");
	}
	//
	
    return 0;
}

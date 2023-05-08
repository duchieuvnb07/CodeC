#include <stdio.h>
 int main(){
 	printf("Menu Ga ran Popeyes:\n");
 	printf("1. Ga truyen thong.\n");
 	printf("2. Ga chien nuoc mam.\n");
 	printf("3. My spagetthi.\n");
 	printf("Xin moi ban chon mon:");
 	printf("\nxin hay nhap 1, 2, 3:\n");
 	
 	int luachon;
 	scanf("%d",&luachon);
 	if (luachon == 1){
 		printf("Ga truyen thong.");
	 }
	 else if (luachon == 2){
	 	printf("Ga chien nuoc mam.");
	 }
	 else if (luachon == 3)
	    printf("My spagetthi.");	
 }

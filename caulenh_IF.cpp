#include <stdio.h>

int  main(){
	/*dieu kien la gi?
	+ l� ket qua cua ph�p so s�nh, chi tra ve true or false
	+ �ieu kien bao gom:
	  -so s�nh >, <, >=, <=, ==
	  - Bien co kieu gi� tri l� boolean
	  - c�c h�m boolean tra ve gia tri true false
	/*c�ng thuc IF
	   * if(dieu kien)
	   *  {
	      // thuc hien cau lenh neu dieu kien thoa man
		  }
	*/
	
	int diem;
	printf("xin moi nhap diem: ");
	scanf("%d", &diem);
	if(diem <= 0 || diem ==10){
		printf("ban that la VKL");
		return 0;
	}
	// in ra c�i g� d� neu diem = 6, > 6
     if(diem >= 6 && diem <= 10){
     	printf("chuc mung ban da qua mon");
     	return 0;
	 }
	 // luu � so s�nh bang nhau, phai co 2 dau -> ==
	 int diem2;
	 printf("xin moi nhap diem thu 2: ");
	 scanf("%d", &diem2);
	  if(diem2 == 0){
	  printf("xin chuc mung ban da mat 695k");
	  	return 0;
	  }
	  // so s�nh 2 bien
	  int jack = 5000000;
	  int tinale = 14000000000;
	  if(jack < tinale){
	  	printf("jack 5 cu sao bang tinale 14 ty duoc!!");
	  	return 0;
	  }
	  // nhieu dieu kien trong if
	  // dieu kien VA -> &&, dieu kien hoac -> //
	  
	printf("cau lenh khong trong if kh duoc thuc thi");
	return 99;
	
}


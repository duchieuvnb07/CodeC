#include<stdio.h>
int main(){
	int chon;

	do{
		printf("Menu assigment\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Tim uoc chung va boi so chung cua 2 so\n");
		printf("3. Chuong trinh tinh tien diem cho quan karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Chuc nang doi tien\n");
		printf("6. Xay dung chuc nang tinh lai xuat vay ngan hang tra gop\n");
		printf("7. Chuong trinh vay tin mua xe\n");
		printf("8. Sap xep thong tin sinh vien\n");
		printf("9. Xay dung game FPOLY-LOTT\n");
		printf("10. Xay dung chuong trinh tinh toan phan so\n");
		printf("Moi ban chon: ");
		scanf("%d", &chon);
		switch(chon){
			case 1:
				printf("Kiem tra so nguyen\n");
				bai1_asm();
				break;
			case 2:
				printf("Tim uoc chung va boi so chung cua 2 so\n");
				bai2_asm();
				break;
			case 3:
				printf("Chuong trinh tinh tien diem cho quan karaoke\n");
				bai3_asm();
				break;
			case 4:
				printf("Tinh tien dien\n");
				bai4_asm();
				break;
			case 5:
				printf("Chuc nang doi tien\n");
				bai5_asm();
				break;
			case 6:
				printf("Xay dung chuc nang tinh lai xuat vay ngan hang tra gop\n");
				bai6_asm();
				break;
			case 7:
				printf("Chuong trinh vay tin mua xe\n");
				bai7_asm();
				break;
			case8:
				printf("Sap xep thong tin sinh vien\n");
				bai8_asm();
				break;
			case 9:
				printf("Xay dung game FPOLY-LOTT\n");
				bai9_asm();
				break;
			case 10:
				printf("Xay dung chuong trinh tinh toan phan so\n");
				bai10_asm();
				break;
		}
    }while(chon <1 || chon>10);
	return 0;
}

void bai1_asm(){
	int a;
	int dem;
	int i;
	int check;
	printf("Nhap vao so: ");
	scanf("%d", &a);
	printf("%d la so nguyen\n", a);
	if(a<2){
		printf("%d khong phai la so nguyen to",a);
	}else{
		for(i=2;i<a;i++){
			if(a%i==0){
				dem++;
			}
		}
		if(dem==0){
			printf("%d la so nguyen to\n",a);
		}
		else{
			printf("%d khong la so nguyen to\n",a);
		}
	}
	if(a<1){
		printf("%d khong phai la so chinh phuong");
	}else{
		for(i=1;i<=a;i++){
			if(i*i==a){
				check++;
			}
		}
        if(check==0){
        	printf("%d khong la so chinh phuong",a);
		}else{
			printf("%d la so chinh phuong",a);
		}	
	}
	return 0;
}

void bai2_asm(){
	int a, b;
	int max, min;
	int i;	
	printf ("Nhap vao so a: ");
	scanf ("%d",&a);
	printf ("Nhap vao so b: ");
	scanf ("%d",&b);
	// Tim UCLN
	max=a;
	min=b;
	if (max<min){
		min=a;
		max=b;
	}
	for (i=min;i>=1;i--){
		if (min%i==0 && max%i==0){
			printf ("UCLN cua %d va %d la: %d\n",a,b,i);
			break;
		}
	}
	//Tim BCNN
	for (i=max;i<=min*max;i++){
	 	if (i%min==0 && i%max==0){
			printf ("BCNN cua %d va %d la: %d\n ",a,b,i);
			break;
		}
	}
	return 0;
}

void bai3_asm(){
	int a, b;
	int T=150000;
	int tongGio;
	int khuyenMai1;
	int khuyenMai2;
	int tien;
	printf("Vui long nhap gio bat dau: ");
	scanf("%d",&a);
	while(a>23 || a<12){
		printf("Gio bat dau khong hop le, quan hoat dong tu 12 gio, vui long nhap lai gio bat dau: ");
		scanf("%d",&a);
	}
	printf("Vui long nhap gio ket thuc: ");
	scanf("%d",&b);
	while(b<12 || b>23){
		printf("Gio ket thuc khong hop le, quan dong cua tu 23 gio, vui long nhap lai gio ket thuc: ");
		scanf("%d",&b);
	}
	tongGio = b-a;
	printf("Tong gio hat la: %dh\n", tongGio);
	printf("Thanh tien: %d\n", tongGio*T);
	if(tongGio>3){
		printf("Vuot qua 3 gio quy khach duoc khuyen mai \n");
		khuyenMai1 = (tongGio-3)*T*0.3;
		tien = tongGio*T-khuyenMai1;
		printf("So gio da vuot qua 3h la: %dh\n", tongGio-3);
		printf("So tien duoc khuyen mai la: %d\n", khuyenMai1);
		printf("So tien can phai thanh toan la: %d\n", tien);
	}else{
		tien = tongGio*T;
		printf("So tien can phai thanh toan la: %d\n", tien);
	}
	if(a>=14 && a<=17){
		printf("Trong khung gio bat dau tu 14h-17h quy khach duoc khuyen mai them: \n");
		khuyenMai2 = tien*0.1;
		tien = tien-khuyenMai2;
		printf("So tien duoc khuyen mai la: %d\n", khuyenMai2);
		printf("So tien can phai thanh toan la: %d\n", tien);
	}else{
		tien = tongGio*T;
	}
 	return 0;
}

void bai4_asm(){
	float soKW, tiendien;
	int bac1 = 1678, bac2 = 1734, bac3 = 2014, bac4 = 2536, bac5 = 2834, bac6 = 2927;
	printf("nhap vao so dien tieu thu: ");
	scanf("%f", &soKW);
	if(soKW<0){
		printf("Moi nhap lai so dien");
	}else if(soKW<=50){
		tiendien = soKW * bac1;
		printf("so tien phai dong la: %.2f", tiendien);
	}else if(soKW<=100){
		tiendien = 50*bac1 + (soKW-50)*bac2;
		printf("so tien phai dong la: %.2f", tiendien);
	}else if(soKW<=200){
		tiendien = 50*bac1 + (soKW-50)*bac2 + (soKW-100)*bac3;
		printf("so tien phai dong la: %.2f", tiendien);
	}else if(soKW<=300){
		tiendien = 50*bac1 + (soKW-50)*bac2 + (soKW-100)*bac3 + (soKW-200)*bac4;
		printf("so tien phai dong la: %.2f", tiendien);
	}else if(soKW<=400){
		tiendien = 50*bac1 + (soKW-50)*bac2 + (soKW-100)*bac3 + (soKW-200)*bac4 + (soKW-300)*bac5;
		printf("so tien phai dong la: %.2f", tiendien);
	}else{
		tiendien = 50*bac1 + (soKW-50)*bac2 + (soKW-100)*bac3 + (soKW-200)*bac4 + (soKW-300)*bac5 + (soKW-400)*bac6;
		printf("so tien phai dong la: %.2f", tiendien);
	}
	return 0;
}

void bai5_asm(){
	int Menhgia[]={500,200,100,50,20,10,5,2,1};
	int Sotien;
	int Sototien;
	int i;
	printf("Nhap vao so tien can doi: ");
	scanf("%d", &Sotien);
	while(Sotien){
		for(i = 0; i<9; i++){
			Sototien = Sotien/Menhgia[i];
			if(Sototien!=0){
				printf("Doi duoc %d to %dk\n", Sototien, Menhgia[i]);
			}
			Sotien = Sotien-Sototien*Menhgia[i]; 
		}
	}
	return 0;
}

void bai6_asm(){
	int sotien;
	int i;
	printf("Moi nhap vao so tien vay: ");
	scanf("%d", &sotien);
	float laihangthang=0.05;
	int kyhan=12;
	float gocphaitra = sotien/kyhan;
	float laiphaitra, sotienphaitra;
	printf("%0.f", gocphaitra);
	printf("\n|Ky han        |Lai phai tra        |Goc phai tra        |So tien phai tra        |So tien phai tra lai   |\n");
	for(i=1; i<13; i++){
		laiphaitra = sotien*laihangthang;
		sotienphaitra = gocphaitra+laiphaitra;
		sotien = sotien-gocphaitra;
	printf("|%d              |%0.f                |%0.f                 |%0.f                   |%d  |\n", i, laiphaitra, gocphaitra, sotienphaitra, sotien);
	}
	return 0;
}

void bai7_asm(){
	
	return 0;
}

void bai8_asm(){
	
	return 0;
}

void bai9_asm(){
	int randomNumber[2];
	int i;
	int soa,sob;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &soa);
	while(soa<0 || soa > 15){
		printf("Vui long nhap lai so du doan phai >0 va <15: ");
		scanf("%d", &soa);
	}
	printf("Nhap vao so thu hai: ");
	scanf("%d", &sob);
	while(sob < 0 || sob > 15){
		printf("Vui long nhap lai so du doan phai >0 va <15: ");
		scanf("%d", &sob);
	}
	printf("So trung thuong la\n");
	srand(time(0));
	for(i=0; i<7; i++){
		randomNumber[i] = rand() % 15;
		printf("%d   ",randomNumber[i] );
	}
	printf("\n");
	if(soa == randomNumber[0] && sob ==randomNumber[1] ){
		printf("Chuc mung ban da trung giai nhat");
	}
	else if(soa == randomNumber[0] || sob == randomNumber[1]){
		printf("Chuc mung ban da trung giai nhi");
	}
	else{
		printf("Chuc mung ban may man lan sau");
	}
	return 0;
}

void bai10_asm(){
	int a,b;
	int c,d;
	int tutong,mautong;
	int tutich,mautich;
	int tuhieu,mauhieu;
	int tuthuong,mauthuong;
	printf("Nhap vao phan so thu nhat\n");
	printf("Nhap vao tu: ");
	scanf("%d", &a);
	printf("Nhap vao mau: ");
	scanf("%d", &b);
	printf("Nhap vao phan so thu hai\n");
	printf("Nhap vao tu: ");
	scanf("%d", &c);
	printf("Nhap vao mau: ");
	scanf("%d", &d);
	tutong = (a*d) + (c*b);
	mautong = (b*d);
	tutich=a*c;
	mautich=b*d;
	tuhieu=(a*d) - (c*b);
	mauhieu=(b*d);
	tuthuong=a*d;
	mauthuong=b*c;
	printf("Hai phan so vua nhap la %d/%d va %d/%d\n",a, b, c, d);
	printf("Tong cua hai phan so la: %d/%d\n",tutong, mautong );
	printf("Hieu cua hai phan so la: %d/%d\n",tuhieu, mauhieu );
	printf("Tich cua hai phan so la: %d/%d\n",tutich, mautich );
	printf("Thuong cua hai phan so la: %d/%d\n",tuthuong, mauthuong );	
	return 0;
}

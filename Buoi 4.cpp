#include <stdio.h>
int main(){
 // 1. Khai báo m?ng có kích thu?c =5
  int arrTuoiNy[5];
  // 2. Nh?p m?ng
  for (int i = 0; i < 5; i++) {
    printf("Nhap tuoi ny thu %d= ", i + 1);
    // arrTuoiNy[i]: tu?i ny t?i v? trí i trong m?ng arrTuoiNy
    scanf("%d", &arrTuoiNy[i]);
  }
  // 3. Xu?t m?ng
  for (int i = 0; i < 5; i++) {
    printf("Tuoi ny thu %d la: %d \n", i + 1, arrTuoiNy[i]);
  }
  // 4. Xu?t ra nh?ng tu?i > 18
  for (int i = 0; i < 5; i++) {
    if (arrTuoiNy[i] >= 18) {
      printf("Tuoi %d duoc phep yeu\n", arrTuoiNy[i]);
    }
  }
  // 5. Ð?m bao nhiêu tu?i là s? ch?n
  // s? %2 == 0
  int dem = 0;
  for (int i = 0; i < 5; i++) {
    if (arrTuoiNy[i] % 2 == 0) {
      printf("Tuoi %d la so chan\n", arrTuoiNy[i]);
      dem++; // tang lên 1 don v?
    }
  }
  printf("Co tat ca %d tuoi la so chan\n", dem);
  // 6. Tính trung bình tu?i ny
  float trungBinh = 0;
  int tong = 0;
  for (int i = 0; i < 5; i++) {
    tong += arrTuoiNy[i]; // tong = tong+ arrTuoiNy[i];
  }
  trungBinh = (float)tong/5;
  printf("Trung binh tuoi la %f\n", trungBinh);

	int n;
	printf("Moi ban nhap vao n nguoi khao sat: \n");
	scanf("%d",&n);
	int canNang[n];
	int i;
	for(i=0;i<n;i++){
		printf("Can nang cua nguoi khao sat %d la: \n",i+1);
		scanf("%d",&canNang[i]);
	}
	printf("------------------------------------------\n");
	printf("So nguoi tham gia khao sat la: %d\n",n);
	printf("------------------------------------------\n");
	for(i=0;i<n;i++){
    	printf("Can nang cua nguoi khao sat %d la: %d\n",i+1,canNang[i]);
	}
	printf("------------------------------------------\n");
	printf("Nhung nguoi co can nang chan la: \n");
	for(i=0;i<n;i++){
		if(canNang[i]%2==0){
			printf("Nguoi thu %d co can nang chan: %d\n",i+1,canNang[i]);
		}
    
	}
	float trungBinh=0, tong=0;
	for(i=0;i<n;i++){
      tong += canNang[i];
	}
	trungBinh = tong/n;
	printf("------------------------------------------\n");
	printf("Trung binh can nang cua moi nguoi la: %0.2f\n",trungBinh);
	printf("------------------------------------------\n");
	int min = canNang[0];
    int min2=canNang[0];
	for(i=0;i<n;i++){
      if(min > canNang[i]){
      	 min2 = min;
      	 min = canNang[i];
	  }
	}
	for(i=0;i<n;i++){
//    if(min2==min && min==canNang[0]) min2=canNang[1];
//    if (min2>canNang[i] && canNang[i]>min) min2=canNang[i]; 	
}
	printf("Can nang nho nhat la: %d\n",min);
	printf("------------------------------------------\n");
	printf("Can nang nho thu 2 la: %d\n",min2)
	printf("------------------------------------------\n");
	
}

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool kiemTra(int a, int b, int c){
    if((a+b > c) &&  (a + c > b) && (c + b > a)){
        return true;
    }
    return false;
}

int tinhChuVi(int a, int b, int c)
{
  return a+b+c;
}

float tinhDienTich(int a, int b, int c){
    int P = tinhChuVi(a, b, c);
    float p = P/2.0;
     
    float S = sqrt(p * (p-a) * (p-b) *(p-c));
     
    return S;
}
int main()
{
    int a, b, c;
    printf("Nhap lan luot 3 canh cua tam giac:\n ");
    scanf("%d %d %d", &a, &b, &c);
      
    if(kiemTra(a,b,c) == false){
        printf("3 canh khong tao thanh 1 hinh tam giac...");
    }else{
        int P = tinhChuVi(a,b,c);
        float S = tinhDienTich(a,b,c);
         
        printf("Chu vi hinh tam giac la: %d", P);
        printf("\nDien tich hinh tam giac la: %.2f", S);
	}   
}

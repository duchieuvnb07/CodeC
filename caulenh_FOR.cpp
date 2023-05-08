#include <stdio.h>
#include <math.h>
int main(){
	//cau lenh for
	//cong thuc
	// for(int i = <so>; <dkien kthuc>;
	// {
	//   cau lenh
	//}
	// VD:
	for(int i = 0;i < 5;i++){
		printf("quynh dan so %d\n",i);
	}
	//LUU Y: bat buoc khai bao la i -> j -> k -> m -> n
	for(int i = 0; i < 3; i++){
		printf("Hello cac ban\n");
		for(int j = 0; j < 2; j++);
		  printf("hello cc\n");
	}
//luyen tap
//in ra so chan tu 1 den 20
//in ra so le 1-20
   for(int i = 0; i < 21; i=i+2){
 	printf("so chan la %d\n", i);
 }
   for(int i = 1; i < 30; i=i+2){
 	printf("so le la %d\n", i);
}
//in ra so nguyen to 1-20
for (int num = 1; num < 50; ++num)
    {
        int count = 0; 
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && num > 1)
            printf("%d\t", num);
    }

}

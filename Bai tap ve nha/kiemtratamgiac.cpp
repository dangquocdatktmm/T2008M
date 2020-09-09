#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap a");
	scanf("%f",&a);
	printf("nhap b");
	scanf("%f",&b);
	printf("nhap c");
	scanf("%f",&c);
	if((a+b)>c){
		if((b+c)>a){
			if((a+c)>b){
				printf("day la 3 canh cua 1 tam giac \n");
				//tinh chu vi
			float C,p,S;
			C=a+b+c;
			p=(a+b+c)/2;
			S=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("chu vi cua tam giac =%f \n" ,C);
			printf("dien tich cua tam giac = %.4f",S);	
			}else{
		printf("khong phai la 3 canh cua tam giac");
	}
		}else{
		printf("khong phai la 3 canh cua tam giac");
	}
	}else{
		printf("khong phai la 3 canh cua tam giac");
	}
}

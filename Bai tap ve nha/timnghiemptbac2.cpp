#include<stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("nhap a");
	scanf("%f",&a);
	printf("nhap b");
	scanf("%f",&b);
	printf("nhap c");
	scanf("%f",&c);
	
	if (a==0){
		float x;
		x=-c/b;
		printf("phuong trinh co nghiem x=%.4f",x);
	}else{
		float r,x1,x2;
		r=b*b-4*a*c;
		if(r<0){
			printf("phuong trinh vo nghiem");
			}else{
				if(r==0){
				x1=-b/(2*a);
				printf("phuong trinh co nghiem kep x=%.4f",x1);
					}else{
							x1=(-b+sqrt(r))/(2*a);
							x2=(-b-sqrt(r))/(2*a);
							printf("phuong trinh co nghiem x1=%.4f,x2=%.4f",x1,x2);
						}
				}
		}
}

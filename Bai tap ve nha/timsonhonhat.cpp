#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap a");
	scanf("%d",&a);
	
	printf("nhap b");
	scanf("%d",&b);
	
	printf("nhap c");
	scanf("%d",&c);
	
	if (a<=b){
		if(a<=c){
			printf("%d la so nho nhat",a);
		}else{
			printf("%d la so nho nhat",c);
		}
	}else{
		if(b<=c){
			printf("%d la so nho nhat",b);
		}else{
			printf("%d la so nho nhat",c);
		}
	}
}

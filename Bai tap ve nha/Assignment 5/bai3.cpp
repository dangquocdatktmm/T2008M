#include<stdio.h>
int main(){
	int a,b,UCLN;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	if(a!=b){
		if(a<b){
		for(int i=1;i<=a;i++){
			if(a%i==0 && b%i==0){
			UCLN = i;
			}
		}
		printf("UCLN = %d",UCLN);
		}else{
		for(int i=1;i<=b;i++){
			if(a%i==0 && b%i==0){
			UCLN =i;
			}
		}
		printf("UCLN = %d",UCLN);
		}

	}else{
		printf("UCLN = %d",a);
	}
}

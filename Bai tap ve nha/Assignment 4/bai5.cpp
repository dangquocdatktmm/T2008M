#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
if(n<2){
	printf("n khong phai la so nguyen to");
}else{
	int uoc_so=1;
	for(int i=2;i<n-1;i++){
		if(n%i==0){
			uoc_so=0;
		}
	}
	if(uoc_so ==1){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong la so nguyen to",n);
	}
}
}


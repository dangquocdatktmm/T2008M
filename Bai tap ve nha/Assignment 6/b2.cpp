#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x= arr[i];
			break;
		}
	}
	
	if(x==0){
		printf("Mang ko co so duong nao ca!");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && arr[i]<x){
				x = arr[i];
			}
		}
		printf("So duong nho nhat: %d",x);
	}
}

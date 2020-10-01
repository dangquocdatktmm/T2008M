#include<stdio.h>
int main(){
	int n,x, arr[n];
	bool kq=false;	
	printf("nhap n: ");
	scanf("%d",&n);
	do{
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ");
		scanf("%d",&x);
		for(int i=0;i<n;i++){
			if(arr[i]==x){
				kq==true;
				break;
			}
		}
	}	
	}while(kq==true);
}

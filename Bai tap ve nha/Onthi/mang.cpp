#include<stdio.h>
int main(){
	int n,x,arr[n];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	for(int i=0;i<n;i++){
		int tmp = arr[i]%2;
		if(tmp!=0){
			x=arr[i];	
		}
	}
	printf("\n so can tim la %d",x);	
	} 

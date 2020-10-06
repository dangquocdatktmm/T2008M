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
	
	for(int i=0;i<n;i++){
	 printf("%3d",arr[i]);
	}
	printf("\n mang sau khi sap xep: ");
	for (int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	for(int j=0;j<n;j++){
		printf("%3d",arr[j]);
	}
}


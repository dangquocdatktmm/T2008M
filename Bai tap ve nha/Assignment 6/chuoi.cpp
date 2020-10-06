#include<stdio.h>
bool TimKiem(int arr[],int n, int x){
	for(int i=0;i<n;i++){
		if (x==arr[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int n;
	int arr[n];
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x;
		bool flag;
		do{
		printf("nhap arr[%d]",i);
		scanf("5d",&x);
		flag=TimKiem(arr,i,x);
		if(flag==false){
			arr[i]=x;
		}
		}while(flag);
		
	}
	printf("mang sau khi nhap xong \n");
	for(int i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
}

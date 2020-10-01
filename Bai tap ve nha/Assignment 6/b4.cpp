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
	
	int count = 0,S,S_max;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			S=S+arr[i];
			if(S > S_max){
				S_max = S;
			}
		}else{
			S = 0;
		}
	}
	printf("Tong so duong lien tiep lon nhat: %d",S_max);
}

#include <stdio.h>
int main(){
	int n,x;
		printf("Nhap Mang[...] : ");
		scanf("%d",&n);
		printf("Nhap x :");
		scanf("%d",&x);
	int mang[n];
	for(int i=0;i<n;i++){
		do{
			printf("Nhap phan tu thu %d :",i);
			scanf("%d",&mang[i]);
		}while(mang[i]<0);
	}
	// sap xep mang
	for (int i=1; i<n; i++) {
	    int j =i - 1;
	    int tmp = mang[i];
	    while ( (j>=0) && (tmp < mang[j]) ) {
	        mang[j+1] = mang[j];
	        j--;
	    }
	    mang[j+1] = tmp;
	}
		printf("\nMang sau khi sap sep : ");
	for(int i=0;i<n;i++){
		printf("%4d",mang[i]);
	}
	//tim so nho hon va gan voi x nhat
	if(x != mang[0]){
		int X;
		for(int i=0; i<n;i++){
			if(mang[i]<x){
				X = mang[i];
			}
		}	
			printf("\nTiem can duoi cua %d la : %d ",x,X);
	}else{
		printf("\nKhong co tiem can duoi cua %d trong mang",x);
	}
}

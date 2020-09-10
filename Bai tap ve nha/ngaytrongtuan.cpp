#include<stdio.h>
int main(){
	int a;
	printf("nhap vao so bat ki");
	scanf("%d",&a);
	if(a>=2){
		if(a<=7){
		printf("Day la thu %d",a);
		}else{
			if(a==8){
				printf("day la chu nhat");
		}else{
			printf("day khong phai ngay trong tuan");
		}
	}
	}else{
		printf("day khong phai ngay trong tuan");
	}
}

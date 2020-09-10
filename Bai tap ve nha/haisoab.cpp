#include<stdio.h>
int main(){
int a,b;
printf("nhap vao so a");
scanf("%d",&a);
printf("nhap vao so b");
scanf("%d",&b);
if(a>=b){
	float thuong;
	thuong = (float) a/b;
	printf("a/b = %f",thuong);
}else{
	int tich;
	tich=a*b;
	printf("a*b = %d",tich);
}
}

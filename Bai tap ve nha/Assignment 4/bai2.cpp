#include<stdio.h>
int main(){
int n;
float S;
printf("nhap n=");
scanf("%d",&n);
for(int i=1;i<=n;i++){
	S= S+ (float)1/i;
}
printf("tong S = %f",S);
}

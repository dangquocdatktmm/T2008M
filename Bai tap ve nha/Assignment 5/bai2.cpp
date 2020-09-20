#include<stdio.h>
int main(){
	int n,S;
	printf("nhap n=");
	scanf("%d",&n);
	if(n>0){
		for(int i=1;i<=n;i++){
			if(n%i==0){
			 printf("%d \t",i);
			 S=S+i;
			}
			}
		printf("\ntong cac uoc cua %d = %d",n,S);
		}else{
		printf("so ban nhap phai lon hon 0");
	}
}

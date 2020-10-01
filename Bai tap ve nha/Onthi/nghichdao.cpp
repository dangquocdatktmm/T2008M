#include<stdio.h>
int main(){
	int A,B;
	printf("nhap A: ");
	scanf("%d",&A);
	for(;A!=0;A=A/10){
		B= B*10 + A%10;
	}
	printf("So nghich dao la %d",B);
}


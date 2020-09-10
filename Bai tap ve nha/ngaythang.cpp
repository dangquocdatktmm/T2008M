#include<stdio.h>
int main(){
 int ngay,thang;
 printf("nhap ngay");
 scanf("%d",&ngay);
 printf("nhap thang");
 scanf("%d",&thang);
 if(ngay<=30){
 	if(thang<=12){
		int n,t,du;
    	n = ngay + 30*(thang - 1);
    	du = n%7;
    	t = du + 1;
    	if(du==0){
		printf("day la chu nhat \n");
		printf("la ngay thu %d trong nam",n);
		}else{
			printf("day la thu %d \n",t);
			printf("day la ngay thu %d trong nam",n);
		}
}else {
	printf("thang ban nhap khong chinh xac");
}
}else{
	printf("ngay ban nhap khong chinh xac");
}
}

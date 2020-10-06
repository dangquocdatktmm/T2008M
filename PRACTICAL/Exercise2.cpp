#include<stdio.h>
int main(){
	float capital,interest_rate,years,interest;
	printf("Enter Capital Sum \n");
	scanf("%f",&capital);
	printf("Enter Rate of Interest \n");
	scanf("%f",&interest_rate);
	printf("Enter No of years \n");
	scanf("%f",&years);
	for (int i=1;i<=years;i++){
		float interest = capital * interest_rate / 100;
		capital += interest;
		printf("Years \n %3d \t Interest \n %3f, \t Sum \n %3f",i,interest,capital);
	}
}

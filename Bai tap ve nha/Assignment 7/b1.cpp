 #include <stdio.h>
int main(){
	int arr[2][3];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("ma tran ban vua nhap la: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	printf("ma tran chuyen vi vua nhap la: \n");
		for(int i=0;i<3;i++){
			for(int j=0;j<2;j++){
				printf("%5d",arr[j][i]);
		}
		printf("\n");
}
}

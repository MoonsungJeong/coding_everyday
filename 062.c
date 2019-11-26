// 3-53 1~20 범위의 정수 n을 입력받고 팩토리얼(n!) 값을 출력하세요. 만약 범위를 벗어난 값이면 다시 입력받아서 처리하세요.
#include<stdio.h>


int main(){
	int i,n=0;
	double sum=1;
	while(n < 1  || n > 20){
		printf("팩토리얼 값을 구하고 싶은 1~20 범위 정수를 입력하세요: ");
		scanf("%d",&n);
	}
	for(i=1; i<=n; i++)
		sum *= (double)i;

	printf("%d! = %.0f\n",n,sum);
	

	return 0;
}


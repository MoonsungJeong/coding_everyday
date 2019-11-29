// 3-55 1~100 범위에서 제곱 값이 500을 넘지 않는 가장 큰 수와 그 제곱값을 출력하세요. 
#include<stdio.h>
int main(){
	int n=1;
	while(n*n <5000){
		n++;
	}
	n--;
	printf("제곱 값이 5,000을 넘지 않는 가장 큰 정수는 %d입니다.\n",n);
	printf("%d의 제곱 값 = %d\n",n,n*n);
	return 0;
}


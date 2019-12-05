// 3-61 y(x) = 5x^3 - 3x^2 + 2x -1 일 때, 두 정수 a,b를 입력받아 y(a) - y(b) 계산 값을 구하여 출력하세요

#include<stdio.h>
int func(int x){
	int result;
	result = 5*x*x*x - 3*x*x + 2*x -1;
	return result;
}
int main(){
	int n=31,m=-31,r1,r2;
	while(n<-30 || n > 30 || m<-30 || m > 30){
		printf("-30~30 범위의 정수 두 개를 입력하세요(예; 20 10 <엔터>): ");
		scanf("%d %d",&n, &m);
	}
	r1 = func(n);
	r2 = func(m);
	printf("f(%d) - f(%d) = %d\n",n,m,r1-r2);
	return 0;
}


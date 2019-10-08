// 3_1: 두 정수를 입력받고, 각 정수의 제곱을 구하여 더한 값을 출력하세요.
#include<stdio.h>
int main(){
	int a,b,result;

	printf("정수를 입력하세요(a): ");
	scanf("%d", &a);
	printf("다른 정수를 하나 더 입력하세요(b): ");
	scanf("%d", &b);

	result = a*a + b*b;

	printf("%d의 제곱과 %d의 제곱을 더한 결과는 %d입니다.\n",a,b,result);
	
	return 0;
}
// 3_3 정수 숫자 네 개(a,b,c,d)를 입력받아서 평균을 실수 값으로 출력하세요.
// 정수로 4개의 변수를 저장하고, 그합을 나눌때 4.0으로 나누면 실수가 된다.
#include<stdio.h>
int main(){
	int a,b,c,d;
	float result;

	printf("정수 네 개를 입력하세요(예; 10 20 30 40 <엔터>): ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	result = (a+b+c+d)/4.0;
	printf("%d, %d, %d, %d 입력 값의 평균은 %.2f입니다.\n",a,b,c,d,result);

	
	return 0;
}
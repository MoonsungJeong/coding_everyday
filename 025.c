// 3-16 0보다 큰 두 정수를 입력받아서 사칙연산(+, -, *, /) 결과와 그 결과들의 합을 구하여 출력하세요.
// 두개 정수를 입력받을 때 하나씩 입력받거나 연속해서 입력받는 방법이 있습니다.

#include<stdio.h>

int main(){
	int a=-1,b=-1;
	while(a=<0 || b<=0){
		printf("0보다 큰 두 정수를 차례로 입력하세요(예: 100 20 <엔터>): ");
		scanf("%d %d",&a, &b);
	}
	printf("%d + %d = %d\n",a,b, a+b);
	printf("%d - %d = %d\n",a,b, a-b);
	printf("%d * %d = %d\n",a,b, a*b);
	printf("%d / %d = %d\n",a,b, a/b);
	printf("결과 합 = %d\n",(a+b)+(a-b)+(a*b)+(a/b));
	
	return 0;
}
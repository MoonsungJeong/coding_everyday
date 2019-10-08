// 9번 두 정수를 a,b변수에 입력받고, 곱한 결과를 'axb= 곱셈결과' 형식처럼 출력하세요. 
// 예를들어 2와3이 입력되면, "2x3=6"을 출력합니다.
// printf 함수의 출력 형식을 이용해서 문자열로 출력하세요.
#include<stdio.h>
int main(){
	int a,b;
	printf("정수를 입력하세요: ");
	scanf("%d", &a);
	printf("다음 정수를 입력하세요: ");
	scanf("%d", &b);
	printf("%d x %d = %d\n",a,b,a*b);
	return 0;
}
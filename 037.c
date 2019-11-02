// 3-28 두 실수 x,y를 입력받아 root(X^2 + y^2) 수식처럼 계산한 결과를 출력하되, 수학 함수 sqrt, pow를 이용하여 계산하세요.
// 힌트: sqrt는 제곱근을 구하는 함수이고 pow는 X의 Y승을 구하는 함수입니다.
// 두 함수를 사용하려면 math.h 헤더 파일이 필요합니다.

#include<stdio.h>
#include<math.h>
int main(){
	float x,y,result;

	printf("x 값을 입력하세요: ");
	scanf("%f",&x);
	printf("y 값을 입력하세요: ");
	scanf("%f",&y);

	result = sqrt(pow(x,2)+pow(y,2));

	printf("Root(%.3f의 제곱 + %.3f의 제곱) = %.3f\n",x,y,result);

	return 0;
}
// 3-26 "홍길동"과 "김철수" 후보 득표수가 1,024표, 2,319표일 때 각 후보자 득표율을 출력하세요.
// 예를들어, '홍길동 득표율 = 52.150%, 김철수 득표율 = 47.850%' 처럼 출력합니다.

#include<stdio.h>
#define HONG 1024
#define KIM 2319
int main(){
	float rate1, rate2;
	rate1 = (float)HONG/(HONG+KIM)*100;
	rate2 = (float)KIM/(HONG+KIM)*100;
	printf("홍길동 득표율 = %.3f\n",rate1);
	printf("김철수 득표율 = %.3f\n",rate2);
	return 0;
}
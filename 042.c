// 3-33 100만원을 10년간 5% 복리로 저축할 때, 만기 시 찾는 돈을 출력하세요.
// 힌트 : 복리 시 찾을 금액은 원금*((1+이자)^연수)입니다.
// C언어에서는 거듭제곱 연산자가 없으므로 곱하기*를 이용해 구현합니다. 2^3 = 2*2*2

#include<stdio.h>

int main(){
	double money = 1000000;
	double year = 10;
	double interest = 0.05;
	int i;

	for(i=0; i<year; i++){
		money *= (1+interest);
	}
	printf("1000000원을 10년 간 연 5% 복리 저축 시 만기 금액: %d\n",(int)money);
	return 0;
}
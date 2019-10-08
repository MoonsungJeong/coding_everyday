// 3_2: 정수를 x,y변수에 입력받아서 3x + 2y 값을 출력하세요.ㅑ
#include<stdio.h>
int main(){
	int x,y;

	printf("정수 두 개를 (x, y) 입력하면, 3x + 2y 계산 값을 출력하는 예제입니다.\n");

	printf("x값 정수를 입력하세요: ");
	scanf("%d", &x);
	printf("y값 정수를 입력하세요: ");
	scanf("%d", &y);

	printf("3*%d + 2*%d = %d\n", x,y, (3*x)+(2*y));
	return 0;
}
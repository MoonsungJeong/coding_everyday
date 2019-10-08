// 3번: 정수 숫자 하나를 입력받아서 출력하세요.
// printf("이 시스템의 int형 크기는 %i 바이트입니다.\n", sizeof(int));
#include<stdio.h>
int main(){
	int x;

	printf("정수를 입력하세요: ");
	scanf("%d",&x);
	printf("입력한 숫자는 %d입니다.\n",x);
	
	return 0;
}
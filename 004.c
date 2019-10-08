// 4번: 정수 숫자 두 개를 입력받고, 처음에 입력한 수에서 다음에 입력한 수를 뺀 값을 출력하세요
// 정수 2개를 각각 입력받아 처리합니다.
#include<stdio.h>
int main(){
	int num1, num2;

	printf("처음 정수를 입력하세요: ");
	scanf("%d",&num1);

	printf("다음 정수를 입력하세요: ");
	scanf("%d",&num2);

	printf("%d - %d = %d \n",num1, num2, num1-num2);
	
	return 0;
}
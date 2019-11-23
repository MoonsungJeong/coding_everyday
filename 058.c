// 3-48 정수 두 개와 사칙 연산 번호를 입력받아서 계산한 결과를 출력합니다. 단, 나눗셈에서 0으로 
// 나눌 때, "0으로 나눌 수 없습니다." 오류 메시지를 출력하세요.

#include<stdio.h>

int main(){
	int num1, num2, op;
	printf("사칙연산에 사용할 처음 정수를 입력하세요: ");
	scanf("%d",&num1);
	printf("사칙연산 번호 1~4를 입력하세요(1:'+', 2:'-', 3:'/', 4:'*'): ");
	scanf("%d", &op);
	printf("사칙연산에 사용할 다음 정수를 입력하세요: ");
	scanf("%d", &num2);

	switch(op){
	case 1:
		printf("%d + %d = %d\n",num1,num2,num1+num2);
		break;
	case 2:
		printf("%d - %d = %d\n",num1,num2,num1-num2);
		break;
	case 3:
		if(num2 == 0){
			printf("0으로 나눌 수 없습니다.\n");
			break;
		}else{
			printf("%d / %d = %d\n",num1,num2,num1/num2);
			break;
		}
	case 4:
		printf("%d * %d = %d\n",num1,num2,num1*num2);
		break;
	}
	return 0;
}
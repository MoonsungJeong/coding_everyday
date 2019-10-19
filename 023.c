// 3-14 숫자를 입력받고 정수이면 "정수입니다.", 실수이면 "실수입니다."를 출력하세요. 단, -9999가 입력되면 종료하세요.
// 소수점 이하의 숫자가 있는지 검사합니다. 즉, 소수점 이하를 버린 값과 원래 값이 같은지 비교합니다.

#include<stdio.h>
#include<math.h>

int main(){
	float x= 0;

	while(1){
		printf("정수 또는 실수를 입력하세요.: ");
		scanf("%f",&x);
		if(x == -9999)
			break;
		else if((x/(int)x) == 1.0)				// if(x == (double)((int)f)
			printf("정수입니다.\n");
		else
			printf("실수입니다.\n");
	}
	
	return 0;
}
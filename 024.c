// 3-15 정수를 입력받고, 음수이면 "음수", 양수이면 "양수", 0이면, "영"을 출력하세요
// if 조건문을 이용하거나 삼항 영산자(?:)를 이용합니다.

#include<stdio.h>

int main(){
	int x=-101;
	while(x < -100 || x > 100){
		printf("정수를 입력하세요(-100~100): ");
		scanf("%d", &x);
	}
	if(x<0)
		printf("%d 숫자는 '음수'\n",x);
	else if(x>0)
		printf("%d 숫자는 '양수'\n",x);
	else
		printf("%d 숫자는 '영'\n",x);
	return 0;
}
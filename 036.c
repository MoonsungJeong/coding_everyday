// 3-27 하루에 9시간씩 공부할 때, 35년간 공부하는시간의 합을 출력하세요.
// 단, 윤년 8회가 포함된 기간이며, 윤년은 366일로 계산합니다.

#include<stdio.h>
#define YEAR 35
#define DAY 365
#define TIME 9
#define ODD 8
int main(){
	int sum = TIME * (YEAR * DAY + ODD);

	printf("하루 %d시간씩 %d년(윤년 %d회) 공부한 시간: %d 시간\n", TIME, YEAR, ODD, sum);
	return 0;
}
// 3-31 직사각형의 밑변이 10이고 넓이가 400일때 높이를 출력하세요.
// 힌트: 넓이 = 밑변 x 높이

#include<stdio.h>
#define base 10
#define area 400
int main(){
	printf("밑변이 %d, 넓이가 %d인 직사각형의 높이는 %d입니다.\n", base, area, area/base);
	return 0;
}
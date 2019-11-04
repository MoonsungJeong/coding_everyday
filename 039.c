// 3-30 1:5,000(5,000분의 1) 축척 지도에서 135mm는 몇 미터인지 출력하세요.
// 힌트 : 축척 비율을 이용해 거리를 구하고 단위에 맞게 값을 변경합니다.
#define MAP 135
#define P 5000
#include<stdio.h>
int main(){
	printf("거리: %dm\n",MAP*P/1000);
	return 0;
}
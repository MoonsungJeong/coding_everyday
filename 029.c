// 3-20 다람쥐가 한 달에 도토리 3,000개씩 받고, 각 주마다 동일하게 나눠서 먹어야 할 때, 한 주에 몇 개씩 먹을 
// 수 있는지 출력하세요. 단, 한달은 4.3주와 같은 것으로 계산합니다.
#include<stdio.h>

int main(){
	float dotori = 3000;
	float week = 4.3;

	printf("다람쥐가 한 달에 먹을 수 있는 도토리는 3000개 입니다.\n");
	printf("그러므로 한 주에 %d개씩 먹을 수 있습니다.\n",(int)(dotori/week));

	return 0;
}
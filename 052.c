// 3-43 용돈 11만원에서 매일 3천원씩 사용하되 7일째 되는 날에는 그 두배를 사용할때, 마이너스 금액이
// 되지 않는 가장 늦은 날짜 수를 출력하세요.
#include<stdio.h>
int main(){
	int money = 110000;
	int normal = 3000;
	int special = 6000;
	int n=0;

	while(money > 0){
		if(n%7 == 0)
			money -= special;
		else
			money -= normal;
		n++;
	}
	printf("용돈을 %d일까지 사용할 수 있습니다.\n",n);
	return 0;
}
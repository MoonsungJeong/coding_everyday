// 3-19 500원짜리 빵을 10개 샀을 때 판매 가격을 구하세요. 단, 10개 사면 15% 깍아줍니다.
// 15% 깎은(할인한) 가격은 정가에 85/100를 곱하거나 0.85를 곱하면 구할 수 있습니다.

#include<stdio.h>

int main(){
	int bread = 10;
	int price = 500;
	int sum = price * bread * 0.85;

	printf("%d원짜리 빵 %d개를 15%% 할인한 가격은 %d원입니다.\n",price, bread, sum);


	return 0;
}
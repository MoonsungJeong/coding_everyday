// 3-40 첫날에 1원, 둘째 날에 2원, 셋째 날에 4원씩 매일 두 배씩 증가하여 저축할 때, 30일째 되는 날에
// 저축해야 하는 금액을 출력하세요.

#include<stdio.h>
#include<math.h>
int main(){
	unsigned int money=1;
	int i;
	for(i=1;i<30;i++){
		money *= 2;
	}
	printf("30일째 저축할 돈: %d원\n",money);
	return 0;
}
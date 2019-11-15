// 3-41 1에서 n까지 숫자 합이 1,000을 넘어가는 가장 작은 정수n을 출력하세요.

#include<stdio.h>
int main(){
	int i=1,sum=0;
	
	while(1){
		sum += i;
		if(sum > 1000)
			break;
		i++;
	}
	printf("1~n 합이 1,000을 넘어가는 가장 작은 정수 n = %d\n",i);
	return 0;
}
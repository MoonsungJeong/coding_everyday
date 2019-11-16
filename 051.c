// 3-42 1에서 n까지 숫자 합이 10,000을 넘지 않는 가장 큰 정수 n을 출력하세요
#include<stdio.h>
int main(){
	int i=1,sum=0;
	
	while(1){
		sum += i;
		if(sum > 10000){
			--i;
			break;
		}
		i++;
	}
	printf("1~n 합이 10,000을 넘지 않는 가장 큰 정수 n = %d\n",i);
	return 0;
}
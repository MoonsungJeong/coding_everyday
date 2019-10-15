// 3-11 1부터 10까지 각 숫자의 4제곱 값을 pow함수로 계산하여 출력하세요.
// x의 y승 = pow(x,y)
// #include<math.h> 필요
#include<stdio.h>
#include<math.h>

int main(){
	int i;

	for(i=1; i<=10; i++){
		printf(" %2d의 4제곱 =  %6d\n",i,(int)pow(i*(1.0),4));
	}
	
	return 0;
}
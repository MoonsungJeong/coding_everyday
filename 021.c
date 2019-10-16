// 3-12 1에서 20까지의 log X 계산 값을 줄 단위로 출력하세요.
// #include<math.h> 필요, log 함수를 사용하여 구합니다.

#include<stdio.h>
#include<math.h>

int main(){
	int i;

	for(i=1; i<=20; i++){
		printf(" LOG(%d) = %f \n",i,log((double)i));
	}
	
	return 0;
}
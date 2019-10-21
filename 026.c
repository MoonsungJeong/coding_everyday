// 3-17 0에서 100까지 숫자에서 짝수 합을 구하여 출력하세요.
// 나머지 연산자 % 이용
#include<stdio.h>

int main(){
	int i, sum=0;

	for(i=0; i<101; i++){
		if(i%2 == 0){
			sum += i;
		}
	}
	printf("1~100 짝수 합 = %d\n", sum);
	return 0;
}
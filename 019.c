// 3-10 10~90 범위의 난수(random number) 100개를 출력하세요.
// 최소(min)~최대(max) 범위에서 난수 구하기
// rand() % (max - min + 1) + min
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RANDOM_RANGE(min, max) (rand() % (max - min + 1) + min)
#define COUNT 100

int main(){
	int i;
	srand(time(NULL));

	for(i=0; i<COUNT; i++){
		printf("임의 값[%d] = %d \n",i+1,RANDOM_RANGE(10,90));
	}
	return 0;
}
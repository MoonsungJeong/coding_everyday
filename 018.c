// 3-9 0~100 범위의 난수(random number) 5개를 출력하세요
// rand()%101 -> math.h 헤더파일 필요

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	srand(time(NULL));

	for(i=0; i<5; i++){
		printf("임의 값[%d] = %d \n",i+1,rand()%101);
	}
	return 0;
}
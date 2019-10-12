// 3-7 달리기 선수가 하루에 10,6,9,8,12km씩 달렸을 때 합계와 평균을 출력하세요.
// 각 자료를 배열이나 변수에 저장하고 그 값들의 합계와 평균을 구합니다.
// 평균 = 합계 / 개수

#include<stdio.h>

int main(){
	int a[] = {10,6,9,8,12};
	int sum=0, avg,count;
	int i;

	count = sizeof(a)/sizeof(int);

	for(i=0; i<5; i++){
		printf("%d일차 달린 거리: %dkm\n",i+1,a[i]);
		sum += a[i];
	}
	avg = (sum/count) + (sum%count);
	printf("\n합계: %dkm, 평균: %dkm\n",sum, avg);


	return 0;
}
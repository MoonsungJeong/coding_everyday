// 3-6 0~100 범위의 점수를 다섯 개 입력받고 가장 큰 수와 가장 작은 수를 출력하세요.

#include<stdio.h>

int main(){
	int a[5] = {-1,-1,-1,-1,-1};
	int i=0;
	int max=0,min = 100;

	for(i=0; i<5; i++){
		while(a[i] < 0 || a[i] > 100){
			printf("(%d) 정수 숫자를 입력하세요(0~100): ",i+1);
			scanf("%d", &a[i]);
		}
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
	printf("가장 큰 수 = %d, 가장 작은 수 = %d\n",max,min);


	return 0;
}
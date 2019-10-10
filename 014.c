// 3-5 0~100 범위의 점수를 다섯 개 입력받고, 가장 높은 점수를 출력하세요.
#include<stdio.h>

int main(){
	int a[5] = {-1,-1,-1,-1,-1};
	int i=0;
	int max=0;

	while(a[i] < 0 || a[i] > 100){
		printf("(%d) 점수를 정수로 입력하세요(0~100): ",i+1);
		scanf("%d", &a[i]);
		if(!(a[i] < 0 || a[i] > 100)){
			if(a[i] >= max) max = a[i];
			i++;
			if(i==5) break;
		}else{
			a[i] = -1;
		}
		
	}
	printf("최대 점수는 %d점입니다.\n", max);

	return 0;
}
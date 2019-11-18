// 3-45 정수 배열 na에 20,-10,5,-4,-11,6,-1값이 있을때,
// 배열 요소 값을 모두 출력하고, 음수의 합을 출력하세요
// 0보다 작은 수는 음수입니다.

#include<stdio.h>
int main(){
	int i,sum=0;
	int na[7] = {20,-10,5,-4,-11,6,-1};
	for(i=0;i<7; i++){
		printf("%d ",na[i]);
		if(na[i]<0)
			sum+=na[i];
	}
	printf("\n\n음수의 합 : %d\n",sum);
	return 0;
}
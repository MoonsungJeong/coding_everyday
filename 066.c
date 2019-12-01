// 3-57 정사각형 한 변의 길이를 입력하면 꼭짓점에서 중심까지의 거리를 구하여 출력하세요.
// 대각선 길이의 1/2이 중심 거리입니다.
#include<stdio.h>
#include<math.h>
int main(){
	double result,x=-1;
	while(x<0){
		printf("정사각형 한 변의 길이를 입력하세요: ");
		scanf("%lf",&x);
	}
	result = sqrt(pow(x,2)+pow(x,2))/2;
	printf("꼭짓점에서 중심까지의 거리 = %f\n",result);
	
	return 0;
}


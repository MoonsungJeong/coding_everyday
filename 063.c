// 3-54 구의 지름을 입력받고, 구의 표면적(겉넓이)을 계산하여 출력하세요.
// 구의 표면적 = 4*반지름*반지름*파이 (단, 파이는 = 3.141592)
#include<stdio.h>
#define PI 3.141592
int main(){
	double r,result;
	printf("표면적을 구할 구의 지름을 입력하세요: ");
	scanf("%lf",&r);
	result = 4*(r/2)*(r/2)*PI;
	printf("지름 %.3f인 구의 표면적 = %.3f\n",r,result); 
	   
	return 0;
}


// 3-32 구의 체적이 1,000cm^3 일 때, 구의 반지름을 출력하세요
// 힌트 : 구의 체적 = 4/3 * PI * R^3 (단, PI는 3.141592이고 R은 반지름)

#include<stdio.h>
#include<math.h>
#define PI 3.141592
#define S 1000
int main(){
	float r;
	r = pow((S*3/4/PI), 1.0/3.0);
	printf("구의 반지름은 약 %.2f입니다.\n",r);
	return 0;
}
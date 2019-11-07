// 3-34 직각 삼각형 바닥과 빗변의 각도가 30도일 때 사인(sin), 코사인(cos), 탄젠트(tan) 값을 구하여 출력하세요
// C언어에서 제공하는 sin, cos, tan 함수에 전달하는 값은 각도(degree)가 아니라 호도(radian)값을 넘겨야합니다.
// 호도 = 각도 * 파이 / 180

#include<stdio.h>
#include<math.h>
#define degree 30.0
#define PI 3.141592
int main(){
	double radian;
	radian = degree * PI / 180;
	printf("SIN(%f) = %f\n",degree, sin(radian));
	printf("COS(%f) = %f\n",degree, cos(radian));
	printf("TAN(%f) = %f\n",degree, tan(radian));
	return 0;
}
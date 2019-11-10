// 3-36 평지의 일직선상에 있는 두 지점에서 피라미드 꼭대기를 바라는 각도는 30도와 40도였고,
// 거리 차이가 100m일 때 피라미드 높이를 미터 단위로 출력하세요. 단, 파이는 3.141592로 계산합니다.
// 높이 = (100 x SIN(30) x SIN(40)) / SIN(40-30) = 185.1

#include<stdio.h>
#include<math.h>
#define RADIAN(degree) (((double)(degree)*3.141592)/180.0)
int main(){
	double height;  
	double d = 100.0;

	height = (d*sin(RADIAN(30))*sin(RADIAN(40))) / (sin(RADIAN(40-30)));
	printf("피라미드 높이는 %.1fm입니다.\n",height);

	return 0;
}
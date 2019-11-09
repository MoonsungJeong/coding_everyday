// 3-35 15도 경사의 언덕을 500미터 걸었을 때 몇 미터 올라갔는지 소수점 둘째 자리까지 출력하세요
// 힌트: sin(15) = 높이 / 500

#include<stdio.h>
#include<math.h>
#define degree 15.0
#define PI 3.141592
int main(){
	double height;
	double radian;
	radian = degree * PI / 180;
	height = sin(radian)*500;
	printf("높이는 %.2fm입니다.\n",height);

	return 0;
}
// 3-39 헤론(Heron)의 공식을 이용하여 각 변 A,B,C가 3,4,5인 삼각형 넓이를 구하세요.
// 삼각형 넓이를 구하는 헤론의 공식
// sqrt(S*(S-A)*(S-B)*(S-C)) (단, S = (A+B+C)/2)

#include<stdio.h>
#include<math.h>
int main(){
	int a=3,b=4,c=5;
	int s = (a+b+c)/2;
	double area;

	area = sqrt((double)s*(s-a)*(s-b)*(s-c));
	printf("각 변의 길이가 3,4,5인 삼각형 넓이 = %.3f\n",area);
	return 0;
}
// 5번 9.5값을 올림함수(ceil)와 내림함수(floor)를 이용한 결과를 각각 출력하세요.
// math라이브러리 사용을 위해서 #include<math.h> 포함

#include<stdio.h>
#include<math.h>
int main(){
	double num = 9.5;
	//double c = ceil(num);
	//double f = floor(num);

	printf("9.5의 올림 값: %.1f\n", ceil(num));
	printf("9.5의 내림 값: %.1f\n", floor(num));
	
	return 0;
}
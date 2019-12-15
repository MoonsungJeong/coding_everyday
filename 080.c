// 3-71 A^2 + B^2 = C^2 을 만족하는 A,B,C를 구하여 출력하세요. 단, A와 B의 범위는 1~20으로 제한합니다.
// 힌트: 이중 for문을 이용하여 식을 만족하는 a,b,c를 구합니다.
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	for(a=1; a<=20; a++){
		for(b=1; b<=20; b++){
			c = sqrt(pow(a,2)+pow(b,2));
			if(c - (int)c == 0)
				printf("a= %d, b= %d, c= %d\n",(int)a,(int)b,(int)c);
		}
	}
	return 0;
}


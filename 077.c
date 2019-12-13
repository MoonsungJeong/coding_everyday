// 3-68 어린이 교통사고 건수가 다음과 같을 때 발생률을 퍼센트로 나타내세요.
#include<stdio.h>

int main(){
	int seasons[4] = {220,190, 150, 310};
	int i,sum=0;

	for(i=0;i<4;i++)
		sum += seasons[i];

	printf("봄: %.2f% ",(double)seasons[0]*100/sum);
	printf("여름: %.2f% ",(double)seasons[1]*100/sum);
	printf("가을: %.2f% ",(double)seasons[2]*100/sum);
	printf("겨울: %.2f% \n",(double)seasons[3]*100/sum);
	
	return 0;
}


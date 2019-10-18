// 3-13 0~100 범위의 점수를 입력받아서 그 점수를 출력하고, 60점 미만이면 '탈락', 90점 이상은 '우수'를 출력하세요
// 각 점수 범위인지 if ~ else if 조건문을 이용하여 처리합니다.

#include<stdio.h>
#include<math.h>

int main(){
	int score=-1;

	while(score < 0 || score > 100){
		printf("점수를 입력하세요(0~100).: ");
		scanf("%d", &score);
	}

	printf("입력한 점수: %d\n", score);
	
	if(score >= 90)
		printf("우수\n");
	else if(score < 60)
		printf("탈락\n");
	else
		printf("보통\n");

	
	return 0;
}
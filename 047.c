// 3-38 네 자리 연도를 입력받고 양력 2월 윤달이 있는 윤년인지 아닌지 출력하세요
// 400으로 나누어지면 무조건 윤년입니다. 400 윤년 이외에 100으로 나누어지면 평년입니다. 그 나머지 중에서 4로 나누어지면 윤년입니다.
#include<stdio.h>

int main(){
	int n=0;
	while(n < 1000 || n > 9999){
		printf("윤년인지 확일할 연도를 네 자리로 입력하세요(예; 2016): ");
		scanf("%d",&n);
	}
	if(n % 400 == 0)
		printf("%d년은 윤년입니다.\n",n);
	else if(n % 100 == 0)
		printf("%d년은 평년입니다.\n",n);
	else if(n % 4 == 0)
		printf("%d년은 윤년입니다.\n",n);
	else
		printf("%d년은 평년입니다.\n",n);

	return 0;
}
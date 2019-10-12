// 3-8 사각형의 가로와 세로 길이를 정수로 입력받고, 그 사각형의 넓이를 출력하세요
// 사각형의 넓이 = 가로 길이 * 세로 길이

#include<stdio.h>

int main(){
	int width, height;

	printf("사각형의 가로 길이를 정수로 입력하세요: ");
	scanf("%d", &width);
	printf("사각형의 세로 길이를 정수로 입력하세요: ");
	scanf("%d", &height);

	printf("가로 %d, 세로 %d인 사각형 넓이는 %d입니다.\n",width, height, width*height);
	
	return 0;
}
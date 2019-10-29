// 3-25 정수 숫자를 입력받을 때마다 그 합계를 출력하는 무한 순환 문장으로 작성하되,
// '0'이 입력되면 종료하도록 작성하세요.

#include<stdio.h>
int main(){
	int n=-1, sum=0;

	while(n != 0){
		printf("정수 숫자를 입력하세요: ");
		scanf("%d", &n);
		sum += n;
		printf("합계: %d\n",sum);
	}
	printf("종료됨.\n");
	return 0;
}
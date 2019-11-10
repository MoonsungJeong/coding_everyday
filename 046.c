// 3-37 정수 X,Y를 입력받고 X의 Y승 값과 그 값이 몇 자릿수인지 출력하세요. X는 1~9, Y는 2~10까지
// 허용하되 double 형으로 계산하고, X의 Y승은 수학 함수(pow())를 사용하지 말고 직접 구현하세요.
#include<stdio.h>

int main(){
	int x=0,y=0,result=1;
	int i,cnt=0;

	while((x<1 || x >9) && (y < 2 || y > 10)){
		printf("정수 X를 입력하세요(1~9): ");
		scanf("%d",&x);
		printf("정수 Y를 입력하세요(2~10): ");
		scanf("%d",&y);
	}
	for(i=0; i<y; i++){
		result *= x;
	}
	printf("%d\n",result);
	while(result){
		result /= 10;
		cnt++;
	}
	printf("결과 값의 자릿수 = %d\n",cnt);
	return 0;
}
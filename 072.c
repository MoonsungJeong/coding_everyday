// 3-63 1~99사이의 난수를 생성하고, 그 값을 맞추는 추정값을 5번까지 입력받는 게임을 만드세요.
// 입려된 값이 난수보다 작으면 "그것보다 큽니다.", 난수보다 크면 "그것보다 작습니다."를 출력하고,
// 입의의 수와 추정값이 같으면 "정답입니다!" 를 출력하고 끝냅니다. 단, 입력 횟수가 5회를 넘어가면
// "실패했습니다! "를 출력하고 끝내세요.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
int main(){
	int a,b,n=0;
	srand(time(NULL));
	
	a = rand()%99+1;
	while(n<6){
		if(n==5){
			printf("%d입니다!! 실패했습니다! \n",a);
			break;
		}
		printf("1~99 범위의 숫자입니다. 예상하는 수를 입력하세요.: ");
		scanf("%d",&b);
		if(b<a){
			printf("%d보다 큽니다.\n",b);
		}
		else if(b>a){
			printf("%d보다 작습니다.\n",b);
		}
		else if(b==a){
			printf("정답입니다! \n");
			break;
		}
		
		n++;
	}
	return 0;
}


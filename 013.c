//정수 x를 입력받아서 (x-1)의 세제곱 값을 출력하세요. 단, 0보다 적은 값이 입력되면 다시 입력받으세요.
// 직접 계산하거나, pow 함수를 이용할수 있습니다.(math.h이용)

#include<stdio.h>
#include<math.h>

int main(){
	int x;
	while(1){
		printf("(x-1)의 3승을 계산할 x값을 정수로 입력하세요: ");
		scanf("%d",&x);
		if(x>=0)
			break;
		printf("0 이상의 값만 입력하세요.\n");
	}
	printf("(%d-1)의 3승은 %.0f입니다.\n",x, pow(x-1.0,3));

	return 0;
}
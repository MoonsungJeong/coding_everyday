// 3-51 구구단의 단을 입력받고 그 단을 "2x3 = 6" 형식으로 모두 출력하세요. 단, 입력 값이 0이면,
// 종료하고, 그렇지 않으면 무한 반복하세요.
#include<stdio.h>


int main(){
	int n,i;
	
	while(1){
		printf("구구단의 단(2~9)을 입력하세요(0 = 종료): ");
		scanf("%d",&n);
		if(n == 0)
			break;
		printf("[%d단]\n",n);
		for(i=1; i<=9; i++){
			printf("%d x %d = %d\n",n,i,n*i);
		}
	}
	return 0;
}


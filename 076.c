// 3-67 log함수와 별(*) 문자를 이용하여 다음 형태로 출력합니다
#include<stdio.h>
#include<math.h>

int main(){
	int i,j,k;
	
	for(i=1; i <= 20; i++){
		k = (int)(log((double)i)*25.0);
		for(j=0; j < k; j++)
			putchar(' ');
		printf("*\n");
	}
	return 0;
}


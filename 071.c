// 3-62 1~9사이의 임의 값(random number; 난수)을 100개 출력하고, 각 숫자와 나타난 개수를 출력하세요, 
// 출력 형식은 각 '숫자: 개수'를 사용합니다.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
int main(){
	int i;
	int arr[MAX],num[9]={0};
	srand(time(NULL));
	
	for(i=0; i<MAX; i++){
		arr[i] = rand()%9+1;
		printf("[%d] ", arr[i]);
		switch(arr[i]){
			case 1:
				num[0]++;
				break;
			case 2:
				num[1]++;
				break;
			case 3:
				num[2]++;
				break;
			case 4:
				num[3]++;
				break;
			case 5:
				num[4]++;
				break;
			case 6:
				num[5]++;
				break;
			case 7:
				num[6]++;
				break;
			case 8:
				num[7]++;
				break;
			case 9:
				num[8]++;
				break;
		}
	}
	for(i=0;i<9; i++)
		printf("%d : %d\n",i+1,num[i]);
	return 0;
}


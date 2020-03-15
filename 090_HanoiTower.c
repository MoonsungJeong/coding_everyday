#include<stdio.h>

void HanoiTowerMove(int num, char From, char By, char To){
	if(num == 1){
		printf("원반1을 %c에서 %c로 이동\n",From, To);
	}else{
		HanoiTowerMove( num-1, From, To, By);
		printf("원반%d을 %c에서 %c로 이동\n",num, From, To);
		HanoiTowerMove( num-1, By, From, To);
	}
}
int main(){
	HanoiTowerMove(3,'A','B','C');

	return 0;
}
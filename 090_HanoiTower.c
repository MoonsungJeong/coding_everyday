#include<stdio.h>

void HanoiTowerMove(int num, char From, char By, char To){
	if(num == 1){
		printf("����1�� %c���� %c�� �̵�\n",From, To);
	}else{
		HanoiTowerMove( num-1, From, To, By);
		printf("����%d�� %c���� %c�� �̵�\n",num, From, To);
		HanoiTowerMove( num-1, By, From, To);
	}
}
int main(){
	HanoiTowerMove(3,'A','B','C');

	return 0;
}
// 3-9 0~100 ������ ����(random number) 5���� ����ϼ���
// rand()%101 -> math.h ������� �ʿ�

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	srand(time(NULL));

	for(i=0; i<5; i++){
		printf("���� ��[%d] = %d \n",i+1,rand()%101);
	}
	return 0;
}
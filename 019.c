// 3-10 10~90 ������ ����(random number) 100���� ����ϼ���.
// �ּ�(min)~�ִ�(max) �������� ���� ���ϱ�
// rand() % (max - min + 1) + min
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RANDOM_RANGE(min, max) (rand() % (max - min + 1) + min)
#define COUNT 100

int main(){
	int i;
	srand(time(NULL));

	for(i=0; i<COUNT; i++){
		printf("���� ��[%d] = %d \n",i+1,RANDOM_RANGE(10,90));
	}
	return 0;
}
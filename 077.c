// 3-68 ��� ������ �Ǽ��� ������ ���� �� �߻����� �ۼ�Ʈ�� ��Ÿ������.
#include<stdio.h>

int main(){
	int seasons[4] = {220,190, 150, 310};
	int i,sum=0;

	for(i=0;i<4;i++)
		sum += seasons[i];

	printf("��: %.2f% ",(double)seasons[0]*100/sum);
	printf("����: %.2f% ",(double)seasons[1]*100/sum);
	printf("����: %.2f% ",(double)seasons[2]*100/sum);
	printf("�ܿ�: %.2f% \n",(double)seasons[3]*100/sum);
	
	return 0;
}


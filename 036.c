// 3-27 �Ϸ翡 9�ð��� ������ ��, 35�Ⱓ �����ϴ½ð��� ���� ����ϼ���.
// ��, ���� 8ȸ�� ���Ե� �Ⱓ�̸�, ������ 366�Ϸ� ����մϴ�.

#include<stdio.h>
#define YEAR 35
#define DAY 365
#define TIME 9
#define ODD 8
int main(){
	int sum = TIME * (YEAR * DAY + ODD);

	printf("�Ϸ� %d�ð��� %d��(���� %dȸ) ������ �ð�: %d �ð�\n", TIME, YEAR, ODD, sum);
	return 0;
}
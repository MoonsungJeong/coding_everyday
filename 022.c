// 3-13 0~100 ������ ������ �Է¹޾Ƽ� �� ������ ����ϰ�, 60�� �̸��̸� 'Ż��', 90�� �̻��� '���'�� ����ϼ���
// �� ���� �������� if ~ else if ���ǹ��� �̿��Ͽ� ó���մϴ�.

#include<stdio.h>
#include<math.h>

int main(){
	int score=-1;

	while(score < 0 || score > 100){
		printf("������ �Է��ϼ���(0~100).: ");
		scanf("%d", &score);
	}

	printf("�Է��� ����: %d\n", score);
	
	if(score >= 90)
		printf("���\n");
	else if(score < 60)
		printf("Ż��\n");
	else
		printf("����\n");

	
	return 0;
}
// 7�� �̸��� name������ �Է¹ް�, "����� �̸��� xxx�Դϴ�."�� ����ϼ���
// �Է¹��� ���ڿ��� printf �Լ��� �̿��Ͽ� ����ϴ� �⺻ ����

#include<stdio.h>
int main(){
	char str[20]="";
	
	printf("����� �̸���?: ");
	scanf("%s", str);

	printf("����� �̸��� %s�Դϴ�. \n", str);
	
	return 0;
}
// 3-26 "ȫ�浿"�� "��ö��" �ĺ� ��ǥ���� 1,024ǥ, 2,319ǥ�� �� �� �ĺ��� ��ǥ���� ����ϼ���.
// �������, 'ȫ�浿 ��ǥ�� = 52.150%, ��ö�� ��ǥ�� = 47.850%' ó�� ����մϴ�.

#include<stdio.h>
#define HONG 1024
#define KIM 2319
int main(){
	float rate1, rate2;
	rate1 = (float)HONG/(HONG+KIM)*100;
	rate2 = (float)KIM/(HONG+KIM)*100;
	printf("ȫ�浿 ��ǥ�� = %.3f\n",rate1);
	printf("��ö�� ��ǥ�� = %.3f\n",rate2);
	return 0;
}
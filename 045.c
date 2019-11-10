// 3-36 ������ �������� �ִ� �� �������� �Ƕ�̵� ����⸦ �ٶ�� ������ 30���� 40������,
// �Ÿ� ���̰� 100m�� �� �Ƕ�̵� ���̸� ���� ������ ����ϼ���. ��, ���̴� 3.141592�� ����մϴ�.
// ���� = (100 x SIN(30) x SIN(40)) / SIN(40-30) = 185.1

#include<stdio.h>
#include<math.h>
#define RADIAN(degree) (((double)(degree)*3.141592)/180.0)
int main(){
	double height;  
	double d = 100.0;

	height = (d*sin(RADIAN(30))*sin(RADIAN(40))) / (sin(RADIAN(40-30)));
	printf("�Ƕ�̵� ���̴� %.1fm�Դϴ�.\n",height);

	return 0;
}
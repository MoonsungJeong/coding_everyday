// 3-35 15�� ����� ����� 500���� �ɾ��� �� �� ���� �ö󰬴��� �Ҽ��� ��° �ڸ����� ����ϼ���
// ��Ʈ: sin(15) = ���� / 500

#include<stdio.h>
#include<math.h>
#define degree 15.0
#define PI 3.141592
int main(){
	double height;
	double radian;
	radian = degree * PI / 180;
	height = sin(radian)*500;
	printf("���̴� %.2fm�Դϴ�.\n",height);

	return 0;
}
// 3-32 ���� ü���� 1,000cm^3 �� ��, ���� �������� ����ϼ���
// ��Ʈ : ���� ü�� = 4/3 * PI * R^3 (��, PI�� 3.141592�̰� R�� ������)

#include<stdio.h>
#include<math.h>
#define PI 3.141592
#define S 1000
int main(){
	float r;
	r = pow((S*3/4/PI), 1.0/3.0);
	printf("���� �������� �� %.2f�Դϴ�.\n",r);
	return 0;
}
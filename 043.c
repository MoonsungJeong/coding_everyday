// 3-34 ���� �ﰢ�� �ٴڰ� ������ ������ 30���� �� ����(sin), �ڻ���(cos), ź��Ʈ(tan) ���� ���Ͽ� ����ϼ���
// C���� �����ϴ� sin, cos, tan �Լ��� �����ϴ� ���� ����(degree)�� �ƴ϶� ȣ��(radian)���� �Ѱܾ��մϴ�.
// ȣ�� = ���� * ���� / 180

#include<stdio.h>
#include<math.h>
#define degree 30.0
#define PI 3.141592
int main(){
	double radian;
	radian = degree * PI / 180;
	printf("SIN(%f) = %f\n",degree, sin(radian));
	printf("COS(%f) = %f\n",degree, cos(radian));
	printf("TAN(%f) = %f\n",degree, tan(radian));
	return 0;
}
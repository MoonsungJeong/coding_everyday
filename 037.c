// 3-28 �� �Ǽ� x,y�� �Է¹޾� root(X^2 + y^2) ����ó�� ����� ����� ����ϵ�, ���� �Լ� sqrt, pow�� �̿��Ͽ� ����ϼ���.
// ��Ʈ: sqrt�� �������� ���ϴ� �Լ��̰� pow�� X�� Y���� ���ϴ� �Լ��Դϴ�.
// �� �Լ��� ����Ϸ��� math.h ��� ������ �ʿ��մϴ�.

#include<stdio.h>
#include<math.h>
int main(){
	float x,y,result;

	printf("x ���� �Է��ϼ���: ");
	scanf("%f",&x);
	printf("y ���� �Է��ϼ���: ");
	scanf("%f",&y);

	result = sqrt(pow(x,2)+pow(y,2));

	printf("Root(%.3f�� ���� + %.3f�� ����) = %.3f\n",x,y,result);

	return 0;
}
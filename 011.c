// 3_2: ������ x,y������ �Է¹޾Ƽ� 3x + 2y ���� ����ϼ���.��
#include<stdio.h>
int main(){
	int x,y;

	printf("���� �� ���� (x, y) �Է��ϸ�, 3x + 2y ��� ���� ����ϴ� �����Դϴ�.\n");

	printf("x�� ������ �Է��ϼ���: ");
	scanf("%d", &x);
	printf("y�� ������ �Է��ϼ���: ");
	scanf("%d", &y);

	printf("3*%d + 2*%d = %d\n", x,y, (3*x)+(2*y));
	return 0;
}
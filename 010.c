// 3_1: �� ������ �Է¹ް�, �� ������ ������ ���Ͽ� ���� ���� ����ϼ���.
#include<stdio.h>
int main(){
	int a,b,result;

	printf("������ �Է��ϼ���(a): ");
	scanf("%d", &a);
	printf("�ٸ� ������ �ϳ� �� �Է��ϼ���(b): ");
	scanf("%d", &b);

	result = a*a + b*b;

	printf("%d�� ������ %d�� ������ ���� ����� %d�Դϴ�.\n",a,b,result);
	
	return 0;
}
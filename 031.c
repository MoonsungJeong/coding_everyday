// 3-22 2~8�ڸ� ���� ������ �Է¹ް�, �� �ڸ��� ���� �ݴ�� ����ϼ���.
// ���� ���, '12345'�� �Է��ϸ� '54321'�� ����մϴ�.
// ��Ʈ : 2~8�ڸ� ������ ������ 10~99999999�Դϴ�. �Էµ� ���� �ݴ�� ����ϱ� ����
// 1. ���ڿ��� �ٲ㼭 ó���ϴ� ����� �ְ�,
// 2. ������� �������� �̿��Ͽ� ���� ���� �ֽ��ϴ�.

#include<stdio.h>
int main(){
	int a,n;
	printf("2~8�ڸ� ���� ������ �Է��ϼ���.: ");
	scanf("%d",&a);

	printf("������ ����: ");
	while(a >= 10){
		n = a%10;
		a = a/10;
		printf("%d",n);
	}
	printf("%d\n",a);

	/* ����
	int num = -1, num2 = 0;
	
	while( num < 10 || num > 99999999){
		printf("2~8�ڸ� ���� ������ �Է��ϼ���.: ");
		scanf("%d",&num);
	}

	while(num > 0){
		num2 *= 10;
		num2 += num%10;
		num /= 10;
	}

	*/

	return 0;
}
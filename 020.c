// 3-11 1���� 10���� �� ������ 4���� ���� pow�Լ��� ����Ͽ� ����ϼ���.
// x�� y�� = pow(x,y)
// #include<math.h> �ʿ�
#include<stdio.h>
#include<math.h>

int main(){
	int i;

	for(i=1; i<=10; i++){
		printf(" %2d�� 4���� =  %6d\n",i,(int)pow(i*(1.0),4));
	}
	
	return 0;
}
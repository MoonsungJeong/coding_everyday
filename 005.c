// 5�� 9.5���� �ø��Լ�(ceil)�� �����Լ�(floor)�� �̿��� ����� ���� ����ϼ���.
// math���̺귯�� ����� ���ؼ� #include<math.h> ����

#include<stdio.h>
#include<math.h>
int main(){
	double num = 9.5;
	//double c = ceil(num);
	//double f = floor(num);

	printf("9.5�� �ø� ��: %.1f\n", ceil(num));
	printf("9.5�� ���� ��: %.1f\n", floor(num));
	
	return 0;
}
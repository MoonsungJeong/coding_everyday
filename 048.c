// 3-39 ���(Heron)�� ������ �̿��Ͽ� �� �� A,B,C�� 3,4,5�� �ﰢ�� ���̸� ���ϼ���.
// �ﰢ�� ���̸� ���ϴ� ����� ����
// sqrt(S*(S-A)*(S-B)*(S-C)) (��, S = (A+B+C)/2)

#include<stdio.h>
#include<math.h>
int main(){
	int a=3,b=4,c=5;
	int s = (a+b+c)/2;
	double area;

	area = sqrt((double)s*(s-a)*(s-b)*(s-c));
	printf("�� ���� ���̰� 3,4,5�� �ﰢ�� ���� = %.3f\n",area);
	return 0;
}
// 3-7 �޸��� ������ �Ϸ翡 10,6,9,8,12km�� �޷��� �� �հ�� ����� ����ϼ���.
// �� �ڷḦ �迭�̳� ������ �����ϰ� �� ������ �հ�� ����� ���մϴ�.
// ��� = �հ� / ����

#include<stdio.h>

int main(){
	int a[] = {10,6,9,8,12};
	int sum=0, avg,count;
	int i;

	count = sizeof(a)/sizeof(int);

	for(i=0; i<5; i++){
		printf("%d���� �޸� �Ÿ�: %dkm\n",i+1,a[i]);
		sum += a[i];
	}
	avg = (sum/count) + (sum%count);
	printf("\n�հ�: %dkm, ���: %dkm\n",sum, avg);


	return 0;
}
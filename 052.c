// 3-43 �뵷 11�������� ���� 3õ���� ����ϵ� 7��° �Ǵ� ������ �� �ι踦 ����Ҷ�, ���̳ʽ� �ݾ���
// ���� �ʴ� ���� ���� ��¥ ���� ����ϼ���.
#include<stdio.h>
int main(){
	int money = 110000;
	int normal = 3000;
	int special = 6000;
	int n=0;

	while(money > 0){
		if(n%7 == 0)
			money -= special;
		else
			money -= normal;
		n++;
	}
	printf("�뵷�� %d�ϱ��� ����� �� �ֽ��ϴ�.\n",n);
	return 0;
}
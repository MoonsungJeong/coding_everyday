// 3-23 10���� 12586�� 16������ ����ϼ���. 16���� ǥ��� 0~9,A,B,C,D,E,F�� ����ϸ�, ��� �Լ���
// %x, %X ������ ������� ���� ���� ��ȯ�Ͽ� ����ϼ���.
// ��Ʈ : 16 ������� �������� Ȱ���Ͽ� 16���� ǥ��� �ٲߴϴ�. �� �ڸ����� 9�� �Ѿ 16������ A~F ���ڸ� �̿��Ͽ� ǥ���մϴ�
// (A = 10. B=11.C=12.D=13.E=14.F=15)

#include<stdio.h>
#define NUMBER 12586
int main(){
	int n=NUMBER;
	char x[]="0123456789ABCDEF";
	int i,tmp,cnt=0;
	char num[5]={0,}, num2[5]={0,};

	while(n>0){
		tmp = n %16;
		n /= 16;
		num[cnt] = x[tmp];
		cnt++;
	}
	for(i=0; i<cnt; i++){
		num2[i] = num[cnt-i-1];
	}

	printf("10���� %d ==> 16���� %s\n",NUMBER,num2);


	return 0;
}
// 3-53 1~20 ������ ���� n�� �Է¹ް� ���丮��(n!) ���� ����ϼ���. ���� ������ ��� ���̸� �ٽ� �Է¹޾Ƽ� ó���ϼ���.
#include<stdio.h>


int main(){
	int i,n=0;
	double sum=1;
	while(n < 1  || n > 20){
		printf("���丮�� ���� ���ϰ� ���� 1~20 ���� ������ �Է��ϼ���: ");
		scanf("%d",&n);
	}
	for(i=1; i<=n; i++)
		sum *= (double)i;

	printf("%d! = %.0f\n",n,sum);
	

	return 0;
}

